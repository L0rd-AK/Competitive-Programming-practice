def recommendMovies(movies, user_genres):
    genre_match_count = {movie: 0 for movie in movies}
    
    for movie, genres in movies.items():
        genre_match_count[movie] = len(set(genres) & set(user_genres))
    
    recommended_movies = sorted(genre_match_count, key=genre_match_count.get, reverse=True)
    
    recommended_movies = [movie for movie in recommended_movies if genre_match_count[movie] > 0]
    
    return recommended_movies

movies = {
    "John Wick": ["action", "thriller"],
    "Bheeshma": ["comedy", "romance"],
    "Bad Boys for Life": ["action", "comedy", "thriller"],
    "The Great Hack": ["documentary"]
}

userGenres = ["action", "comedy"]
print(recommendMovies(movies, userGenres))
