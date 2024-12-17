import numpy as np

# Data points (Businesses A-G) and centroids C1, C2, C3
data_points = {
    'A': np.array([150, 15.4, 50400200]),
    'B': np.array([144, 11.3, 42100650]),
    'C': np.array([120, 9.9, 39440420]),
    'D': np.array([110, 12.5, 36500520]),
    'E': np.array([100, 9.7, 40650005]),
    'F': np.array([99, 15.2, 45665230]),
    'G': np.array([56, 9.2, 25978080])
}

# Initial centroids
centroids = {
    'C1': np.array([124.5, 15.3, 48032715]),
    'C2': np.array([118.5, 10.85, 39622998.75]),
    'C3': np.array([56, 9.2, 25978080])
}

# Function to compute Euclidean distance
def euclidean_distance(point1, point2):
    return np.sqrt(np.sum((point1 - point2) ** 2))

# K-means clustering process
def kmeans_clustering(data_points, centroids, max_iterations=10):
    cluster_assignments = {}
    
    for _ in range(max_iterations):
        # Step 1: Assign points to the nearest centroid
        new_assignments = {key: [] for key in centroids.keys()}
        for business, point in data_points.items():
            # Calculate distance from each point to all centroids
            distances = {centroid: euclidean_distance(point, centroids[centroid]) for centroid in centroids}
            nearest_centroid = min(distances, key=distances.get)  # Find the nearest centroid
            new_assignments[nearest_centroid].append(business)

        # Step 2: Recompute centroids
        new_centroids = {}
        for centroid, businesses in new_assignments.items():
            if businesses:
                # Calculate new centroid as the mean of the points assigned to this centroid
                new_centroid = np.mean([data_points[business] for business in businesses], axis=0)
                new_centroids[centroid] = new_centroid
            else:
                # If no points are assigned to a centroid, we keep the original centroid (should not happen)
                new_centroids[centroid] = centroids[centroid]

        # Step 3: Check for convergence (if assignments haven't changed)
        if new_assignments == cluster_assignments:
            break

        # Update cluster assignments and centroids
        cluster_assignments = new_assignments
        centroids = new_centroids

    return cluster_assignments, centroids

# Perform K-means clustering
cluster_assignments, final_centroids = kmeans_clustering(data_points, centroids)

# Print the final cluster assignments and centroids
print("Cluster Assignments:")
for centroid, businesses in cluster_assignments.items():
    print(f"{centroid}: {businesses}")

print("\nFinal Centroids:")
for centroid, values in final_centroids.items():
    print(f"{centroid}: {values}")
