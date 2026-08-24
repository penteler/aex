Absolutely. Below are the **5 questions in the exact same order**, with the **answer/program immediately underneath each question**. The programs are written in a practical lab-exam style and include necessary assumptions.

---

## 1 : Write a program to demonstrate use of different operators in Java.

### Answer

```java
public class OperatorsDemo {
    public static void main(String[] args) {

        int a = 10;
        int b = 5;

        // Arithmetic Operators
        System.out.println("Arithmetic Operators:");
        System.out.println("a + b = " + (a + b));
        System.out.println("a - b = " + (a - b));
        System.out.println("a * b = " + (a * b));
        System.out.println("a / b = " + (a / b));
        System.out.println("a % b = " + (a % b));

        // Relational Operators
        System.out.println("\nRelational Operators:");
        System.out.println("a > b = " + (a > b));
        System.out.println("a < b = " + (a < b));
        System.out.println("a == b = " + (a == b));
        System.out.println("a != b = " + (a != b));

        // Logical Operators
        System.out.println("\nLogical Operators:");
        System.out.println("(a > b && b > 0) = " + (a > b && b > 0));
        System.out.println("(a < b || b > 0) = " + (a < b || b > 0));
        System.out.println("!(a == b) = " + !(a == b));

        // Assignment Operators
        int c = 10;
        System.out.println("\nAssignment Operators:");
        c += 5;
        System.out.println("c += 5 : " + c);
        c -= 2;
        System.out.println("c -= 2 : " + c);
        c *= 2;
        System.out.println("c *= 2 : " + c);
        c /= 2;
        System.out.println("c /= 2 : " + c);

        // Increment and Decrement
        System.out.println("\nIncrement/Decrement Operators:");
        System.out.println("++a = " + (++a));
        System.out.println("--b = " + (--b));

        // Ternary Operator
        System.out.println("\nTernary Operator:");
        String result = (a > b) ? "a is greater" : "b is greater";
        System.out.println(result);

        // Bitwise Operators
        System.out.println("\nBitwise Operators:");
        System.out.println("a & b = " + (a & b));
        System.out.println("a | b = " + (a | b));
        System.out.println("a ^ b = " + (a ^ b));
    }
}
```

**Operators demonstrated:** Arithmetic, relational, logical, assignment, increment/decrement, ternary, and bitwise operators.

---

# 2 : Write java programs to demonstrate use of abstract class and interface. Make necessary assumptions.

### Answer

### A. Program demonstrating Abstract Class

```java
abstract class Shape {

    // Abstract method
    abstract void area();

    // Concrete method
    void display() {
        System.out.println("This is a shape.");
    }
}

class Circle extends Shape {

    double radius = 5;

    @Override
    void area() {
        double result = Math.PI * radius * radius;
        System.out.println("Area of Circle = " + result);
    }
}

public class AbstractClassDemo {
    public static void main(String[] args) {

        Circle c = new Circle();

        c.display();
        c.area();
    }
}
```

### B. Program demonstrating Interface

```java
interface Vehicle {

    void start();
    void stop();
}

class Car implements Vehicle {

    @Override
    public void start() {
        System.out.println("Car started.");
    }

    @Override
    public void stop() {
        System.out.println("Car stopped.");
    }
}

public class InterfaceDemo {
    public static void main(String[] args) {

        Car c = new Car();

        c.start();
        c.stop();
    }
}
```

**Output:**

```text
This is a shape.
Area of Circle = 78.53981633974483

Car started.
Car stopped.
```

---

# 3 : Write a java program to demonstrate use of thread priority and how interthread communications take place

### Answer

The following program demonstrates **thread priority** and **inter-thread communication** using `wait()` and `notify()`.

```java
class SharedData {

    private int value;
    private boolean available = false;

    // Producer produces data
    synchronized void produce(int value) {

        while (available) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }

        this.value = value;
        available = true;

        System.out.println("Produced: " + value);

        // Notify waiting consumer
        notify();
    }

    // Consumer consumes data
    synchronized void consume() {

        while (!available) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }

        System.out.println("Consumed: " + value);

        available = false;

        // Notify waiting producer
        notify();
    }
}

class Producer extends Thread {

    SharedData data;

    Producer(SharedData data) {
        this.data = data;
    }

    public void run() {

        for (int i = 1; i <= 5; i++) {
            data.produce(i);
        }
    }
}

class Consumer extends Thread {

    SharedData data;

    Consumer(SharedData data) {
        this.data = data;
    }

    public void run() {

        for (int i = 1; i <= 5; i++) {
            data.consume();
        }
    }
}

public class ThreadDemo {

    public static void main(String[] args) {

        SharedData data = new SharedData();

        Producer producer = new Producer(data);
        Consumer consumer = new Consumer(data);

        // Setting thread priorities
        producer.setPriority(Thread.MAX_PRIORITY);
        consumer.setPriority(Thread.MIN_PRIORITY);

        System.out.println("Producer Priority: "
                + producer.getPriority());

        System.out.println("Consumer Priority: "
                + consumer.getPriority());

        producer.start();
        consumer.start();
    }
}
```

### Important concepts demonstrated

* `Thread.MAX_PRIORITY` = 10
* `Thread.MIN_PRIORITY` = 1
* `setPriority()` sets thread priority.
* `wait()` makes a thread wait.
* `notify()` wakes a waiting thread.
* `synchronized` ensures that only one thread accesses the shared resource at a time.

**Note:** Thread priority is a scheduling hint; it does not guarantee which thread will execute first.

---

# 4 : Write java program to demonstrate useJavaFX in GUI development

### Answer

The following program creates a simple **JavaFX GUI application** containing labels, text fields, a button, and a message.

```java
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class JavaFXDemo extends Application {

    @Override
    public void start(Stage stage) {

        // Create GUI components
        Label title = new Label("JavaFX GUI Demo");

        Label nameLabel = new Label("Enter your name:");

        TextField nameField = new TextField();
        nameField.setMaxWidth(200);

        Button button = new Button("Submit");

        Label result = new Label();

        // Button event
        button.setOnAction(e -> {
            String name = nameField.getText();

            if (name.isEmpty()) {
                result.setText("Please enter your name.");
            } else {
                result.setText("Welcome, " + name + "!");
            }
        });

        // Layout
        VBox root = new VBox(10);

        root.setAlignment(Pos.CENTER);

        root.getChildren().addAll(
                title,
                nameLabel,
                nameField,
                button,
                result
        );

        // Create scene
        Scene scene = new Scene(root, 400, 300);

        // Set stage
        stage.setTitle("JavaFX GUI Application");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
```

### GUI components used

* `Stage` — main application window
* `Scene` — contents of the window
* `Label` — displays text
* `TextField` — accepts user input
* `Button` — performs an action
* `VBox` — arranges components vertically
* `setOnAction()` — handles button events

**Assumption:** JavaFX libraries are installed/configured in the Java development environment.

---

# 5 : Write a program using JDBC for developing simple CRUD application for billing of a Medical Store. Use appropriate GUI components in your application. Make necessary assumptions.

### Answer

**Assumptions:**

* Database: MySQL
* Database name: `medicalstore`
* Table name: `medicine`
* Java Swing is used for the GUI.
* JDBC MySQL driver is available.

### Step 1: Create the database and table

```sql
CREATE DATABASE medicalstore;

USE medicalstore;

CREATE TABLE medicine (
    id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(100),
    price DOUBLE,
    quantity INT
);
```

### Step 2: Java JDBC CRUD Application

```java
import javax.swing.*;
import java.awt.*;
import java.sql.*;

public class MedicalStore extends JFrame {

    JTextField idField, nameField, priceField, quantityField;

    JButton addButton;
    JButton updateButton;
    JButton deleteButton;
    JButton searchButton;
    JButton clearButton;

    Connection con;

    MedicalStore() {

        // Create database connection
        connect();

        setTitle("Medical Store Billing");
        setSize(500, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(6, 2, 10, 10));

        // GUI components
        add(new JLabel("Medicine ID:"));
        idField = new JTextField();
        add(idField);

        add(new JLabel("Medicine Name:"));
        nameField = new JTextField();
        add(nameField);

        add(new JLabel("Price:"));
        priceField = new JTextField();
        add(priceField);

        add(new JLabel("Quantity:"));
        quantityField = new JTextField();
        add(quantityField);

        addButton = new JButton("Add");
        updateButton = new JButton("Update");
        deleteButton = new JButton("Delete");
        searchButton = new JButton("Search");
        clearButton = new JButton("Clear");

        add(addButton);
        add(updateButton);
        add(deleteButton);
        add(searchButton);
        add(clearButton);

        // Button actions
        addButton.addActionListener(e -> addMedicine());
        updateButton.addActionListener(e -> updateMedicine());
        deleteButton.addActionListener(e -> deleteMedicine());
        searchButton.addActionListener(e -> searchMedicine());
        clearButton.addActionListener(e -> clearFields());

        setVisible(true);
    }

    // Establish JDBC connection
    void connect() {

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

            con = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/medicalstore",
                    "root",
                    "password"
            );

            System.out.println("Database Connected");

        } catch (Exception e) {
            JOptionPane.showMessageDialog(
                    this,
                    "Database Connection Failed: " + e.getMessage()
            );
        }
    }

    // CREATE
    void addMedicine() {

        try {

            String sql =
                    "INSERT INTO medicine(name, price, quantity) "
                    + "VALUES (?, ?, ?)";

            PreparedStatement ps = con.prepareStatement(sql);

            ps.setString(1, nameField.getText());
            ps.setDouble(2, Double.parseDouble(priceField.getText()));
            ps.setInt(3, Integer.parseInt(quantityField.getText()));

            ps.executeUpdate();

            JOptionPane.showMessageDialog(
                    this,
                    "Medicine Added Successfully"
            );

            clearFields();

        } catch (Exception e) {

            JOptionPane.showMessageDialog(
                    this,
                    e.getMessage()
            );
        }
    }

    // READ
    void searchMedicine() {

        try {

            String sql =
                    "SELECT * FROM medicine WHERE id=?";

            PreparedStatement ps = con.prepareStatement(sql);

            ps.setInt(
                    1,
                    Integer.parseInt(idField.getText())
            );

            ResultSet rs = ps.executeQuery();

            if (rs.next()) {

                nameField.setText(rs.getString("name"));

                priceField.setText(
                        String.valueOf(rs.getDouble("price"))
                );

                quantityField.setText(
                        String.valueOf(rs.getInt("quantity"))
                );

            } else {

                JOptionPane.showMessageDialog(
                        this,
                        "Medicine not found"
                );
            }

        } catch (Exception e) {

            JOptionPane.showMessageDialog(
                    this,
                    e.getMessage()
            );
        }
    }

    // UPDATE
    void updateMedicine() {

        try {

            String sql =
                    "UPDATE medicine SET name=?, price=?, "
                    + "quantity=? WHERE id=?";

            PreparedStatement ps = con.prepareStatement(sql);

            ps.setString(1, nameField.getText());

            ps.setDouble(
                    2,
                    Double.parseDouble(priceField.getText())
            );

            ps.setInt(
                    3,
                    Integer.parseInt(quantityField.getText())
            );

            ps.setInt(
                    4,
                    Integer.parseInt(idField.getText())
            );

            int rows = ps.executeUpdate();

            if (rows > 0) {

                JOptionPane.showMessageDialog(
                        this,
                        "Medicine Updated Successfully"
                );

            } else {

                JOptionPane.showMessageDialog(
                        this,
                        "Medicine not found"
                );
            }

        } catch (Exception e) {

            JOptionPane.showMessageDialog(
                    this,
                    e.getMessage()
            );
        }
    }

    // DELETE
    void deleteMedicine() {

        try {

            String sql =
                    "DELETE FROM medicine WHERE id=?";

            PreparedStatement ps = con.prepareStatement(sql);

            ps.setInt(
                    1,
                    Integer.parseInt(idField.getText())
            );

            int rows = ps.executeUpdate();

            if (rows > 0) {

                JOptionPane.showMessageDialog(
                        this,
                        "Medicine Deleted Successfully"
                );

                clearFields();

            } else {

                JOptionPane.showMessageDialog(
                        this,
                        "Medicine not found"
                );
            }

        } catch (Exception e) {

            JOptionPane.showMessageDialog(
                    this,
                    e.getMessage()
            );
        }
    }

    // Clear input fields
    void clearFields() {

        idField.setText("");
        nameField.setText("");
        priceField.setText("");
        quantityField.setText("");
    }

    public static void main(String[] args) {

        new MedicalStore();
    }
}
```

### CRUD operations demonstrated

| Operation  | JDBC statement | Method             |
| ---------- | -------------- | ------------------ |
| **Create** | `INSERT`       | `addMedicine()`    |
| **Read**   | `SELECT`       | `searchMedicine()` |
| **Update** | `UPDATE`       | `updateMedicine()` |
| **Delete** | `DELETE`       | `deleteMedicine()` |

The application uses **Swing GUI components** such as `JFrame`, `JLabel`, `JTextField`, `JButton`, and `JOptionPane`, together with **JDBC** classes such as `Connection`, `PreparedStatement`, and `ResultSet`.
