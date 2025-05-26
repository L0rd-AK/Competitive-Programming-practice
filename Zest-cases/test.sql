--Active: 1748200152577@@127.0.0.1@5432@conservation_db
CREATE DATABASE conservation_db;

connect conservation_db;
-- creating rangers table
CREATE TABLE rangers (
    ranger_id SERIAL PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    region VARCHAR(50) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);


-- creating species table
CREATE TABLE species (
    species_id SERIAL PRIMARY KEY,
    common_name VARCHAR(100) NOT NULL,
    scientific_name VARCHAR(150) NOT NULL,
    discovery_date DATE,
    conservation_status VARCHAR(50) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);


-- creating sightings table
CREATE TABLE sightings (
    sighting_id SERIAL PRIMARY KEY,
    ranger_id INTEGER REFERENCES rangers(ranger_id),
    species_id INTEGER REFERENCES species(species_id),
    sighting_time TIMESTAMP NOT NULL,
    location VARCHAR(100) NOT NULL,
    notes TEXT,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);



-- Inserting demo data into rangers table
INSERT INTO rangers (name, region) VALUES
    ('Alice Green', 'Northern Hills'),
    ('Bob White', 'River Delta'),
    ('Carol King', 'Mountain Range');



-- Inserting demo data into species table
INSERT INTO species (common_name, scientific_name, discovery_date, conservation_status) VALUES
    ('Snow Leopard', 'Panthera uncia', '1775-01-01', 'Endangered'),
    ('Bengal Tiger', 'Panthera tigris tigris', '1758-01-01', 'Endangered'),
    ('Red Panda', 'Ailurus fulgens', '1825-01-01', 'Vulnerable'),
    ('Asiatic Elephant', 'Elephas maximus indicus', '1758-01-01', 'Endangered');


-- Inserting demo data into sightings table
INSERT INTO sightings (species_id, ranger_id, location, sighting_time, notes) VALUES
    (1, 1, 'Peak Ridge', '2024-05-10 07:45:00', 'Camera trap image captured'),
    (2, 2, 'Bankwood Area', '2024-05-12 16:20:00', 'Juvenile seen'),
    (3, 3, 'Bamboo Grove East', '2024-05-15 09:10:00', 'Feeding observed'),
    (1, 2, 'Snowfall Pass', '2024-05-18 18:30:00', NULL);


-- Problem 1
INSERT INTO rangers (name, region) VALUES
    ('Derek Fox', 'Coastal Plains');
-- Problem 2
SELECT COUNT(DISTINCT species_id) as unique_species_count
FROM sightings;

-- Problem 3
SELECT sighting_id, sp.species_id, r.ranger_id, location, sighting_time, notes
FROM sightings s
JOIN rangers r ON s.ranger_id = r.ranger_id
JOIN species sp ON s.species_id = sp.species_id
WHERE s.location ILIKE '%Pass%'
ORDER BY s.sighting_time;

-- Problem 4
SELECT 
    r.name as ranger_name,
    COUNT(s.sighting_id) as total_sightings
FROM rangers r
LEFT JOIN sightings s ON r.ranger_id = s.ranger_id
GROUP BY r.ranger_id, r.name
ORDER BY total_sightings DESC;

-- Problem 5
SELECT *
FROM species sp
LEFT JOIN sightings s ON sp.species_id = s.species_id
WHERE s.sighting_id IS NULL
ORDER BY sp.common_name;

-- Problem 6
SELECT 
    s.sighting_time,
    sp.common_name as species,
    r.name as ranger_name,
    s.location,
    s.notes
FROM sightings s
JOIN rangers r ON s.ranger_id = r.ranger_id
JOIN species sp ON s.species_id = sp.species_id
ORDER BY s.sighting_time DESC
LIMIT 2;

-- Problem 7
UPDATE species
SET conservation_status = 'Historic'
WHERE EXTRACT(YEAR FROM discovery_date) < 1800;

-- Problem 8
SELECT 
    s.sighting_time,
    CASE 
        WHEN EXTRACT(HOUR FROM s.sighting_time) < 12 THEN 'Morning'
        WHEN EXTRACT(HOUR FROM s.sighting_time) BETWEEN 12 AND 17 THEN 'Afternoon'
        ELSE 'Evening'
    END as time_of_day,
    sp.common_name as species,
    r.name as ranger_name,
    s.location
FROM sightings s
JOIN rangers r ON s.ranger_id = r.ranger_id
JOIN species sp ON s.species_id = sp.species_id
ORDER BY s.sighting_time;

-- Problem 9
DELETE FROM rangers r
WHERE NOT EXISTS (
    SELECT 1 
    FROM sightings s 
    WHERE s.ranger_id = r.ranger_id
);
