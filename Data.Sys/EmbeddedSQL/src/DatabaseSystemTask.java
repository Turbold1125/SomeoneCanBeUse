import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class DatabaseSystemTask {
    public static void main(String[] args, int i) throws SQLException{
    String DB_URL = "jdbc:mysql://localhost:3308/urgoo" ;
    String USER = "root" ;
    String PASS = "Bu162178" ;
    int id = 5 ;
    String title = "new_movie" ;
    int genre_id = 6 ;
    int runtime = 150 ;
    int release_date = 1995 ;
    try {
    Connection connection = DriverManager.getConnection(DB_URL, USER, PASS) ;
    String sql = "INSERT INTO  (id, title, genre_id, runtime, release_date)"
    + " VALUES (?, ?, ?, ?, ?)" ;
    PreparedStatement statement = connection.prepareStatement(sql) ;
    statement.setInt(1, id);
    statement.setString(2, title);
    statement.setInt(3, genre_id);
    statement.setInt(4, runtime);
    statement.setInt(5, release_date);
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