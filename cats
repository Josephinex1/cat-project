CREATE TABLE cats (
  id INTEGER PRIMARY KEY,
  name VARCHAR(255),
  image VARCHAR(255),
  age INTEGER,
  nationality VARCHAR(255)
);

INSERT INTO cats (name, image, age, nationality) VALUES ("Yan", "http://www.lantaanimalwelfare.com/wp-content/uploads/2018/09/Yan-Web.jpg", 1, "Thai"),
("Mambo","http://www.lantaanimalwelfare.com/wp-content/uploads/2018/03/Cats-13-of-13.jpg", 2, "Panamanian"),
("Pirate","http://www.lantaanimalwelfare.com/wp-content/uploads/2017/10/Pirate-01-800x450.jpg", 3, "Irish"),
("Aria","http://www.lantaanimalwelfare.com/wp-content/uploads/2017/10/Aria-01-800x450.jpg", 4, "French"),
("Sunset","http://www.lantaanimalwelfare.com/wp-content/uploads/2017/07/Sunset-01-800x450.jpg", 5, "Kenyan");
