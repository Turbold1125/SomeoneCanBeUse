import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;
import java.sql.SQLException;
public class DatabaseSystemTask {
    public static <Statement> void main(String[] args) throws SQLException{
    String DB_URL = "jdbc:mysql://localhost:3308/urgoo" ;
    String USER = "root" ;
    String PASS = "Bu162178" ;
    try {
        Connection connection = DriverManager.getConnection(DB_URL, USER, PASS) ;
        java.sql.Statement statement = connection.createStatement() ;
        String sql = "SELECT * FROM shows AS s, movie AS m, theater AS t " +
        "WHERE t.id = s.theater_id AND s.movie_id = m.id AND t.namee = 'Theater1'";
        ResultSet result = statement.executeQuery(sql) ;
        ResultSetMetaData metaData = result.getMetaData();
        int numColumn = metaData.getColumnCount();
        while (result.next()) {
        String ResultData = "";
        for (int i = 1; i <= numColumn; i++) {
            if (i != numColumn)
                ResultData += result.getString(i) + ", ";
            else
                ResultData += result.getString(i);
        }
        System.out.println(ResultData);
        }
    }
    catch (SQLException ex){
    ex.printStackTrace();
    }
    }
}