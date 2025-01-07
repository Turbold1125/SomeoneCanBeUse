public class DatabaseSystemTask {
    public static void main(String[] args) throws SQLException {
    String DB_URL = "jdbc:mysql://localhost:3306/Hitech" ;
    String USER = "root" ;
    String PASS = "" ;
    int id = 4 ;
    String first_name = "Dorj" ;
    String last_name = "Bold" ;
    int phone_number = 99889988 ;
    String password = "dorjoo#" ;
    String type = "client" ;
    String email = "dorjbold@gmail.com" ;
    try {
    Connection connection = DriverManager.getConnection(DB_URL, USER, PASS) ;
    String sql = "INSERT INTO user (id, first_name, last_name, phone_number,
   email, password, type)"
    + " VALUES (?, ?, ?, ?, ?, ?, ?)" ;
    PreparedStatement statement = connection.prepareStatement(sql) ;
    statement.setInt(1, id);
    statement.setString(2, first_name);
    statement.setString(3, last_name);
    statement.setInt(4, phone_number);
    statement.setString(5, email);
    statement.setString(6, password);
    statement.setString(7, type);
    int rows = statement.executeUpdate() ;
    if (rows > 0){
    System.out.println("Shine hereglegchiin medeelel amjilttai nemegdlee");
    }
    }
    catch (SQLException ex) {
    ex.printStackTrace();
    }
    }
   }