package es.uma.alelucena.org.iis2024.parcial1;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/** Students in an educational institution */
public class Student {
  public enum STUDENT_TYPE {
    REGULAR,
    VISITING
  }

  public String name;
  public STUDENT_TYPE type;
  public Integer identifier;
  public List<String> passedCourses;
  public List<String> currentCourses;


  public Student(String name, STUDENT_TYPE type, int identifier) {
    this.name = name;
    this.type = type;
    this.identifier = identifier;
    this.currentCourses = new ArrayList<>();
    this.passedCourses = new ArrayList<>();
  }

  /**
   * Recibe como parámetros el nombre del curso en el que el estudiante desea inscribirse y el catálogo de cursos.
   * Verifica si el curso existe en el catálogo de cursos.
   * Si el curso es "Programming II", verifica si el estudiante ha pasado "Programming I". Si no lo ha pasado, la inscripción falla. Si lo ha pasado, verifica si el estudiante ya está inscrito en "Programming II". Si ya está inscrito, la inscripción falla. Si no está inscrito, inscribe al estudiante en el curso y la inscripción es exitosa.
   * Si el curso es "Spanish", verifica si el estudiante es un estudiante visitante. Si no lo es, la inscripción falla. Si lo es, verifica si el estudiante ya está inscrito en "Spanish". Si ya está inscrito, la inscripción falla. Si no está inscrito, inscribe al estudiante en el curso y la inscripción es exitosa.
   * Si el curso no es ni "Programming II" ni "Spanish", verifica si el estudiante ya está inscrito en el curso. Si ya está inscrito, la inscripción falla. Si no está inscrito, inscribe al estudiante en el curso y la inscripción es exitosa.
   * Si el curso no existe en el catálogo de cursos, la inscripción falla.
   * Finalmente, devuelve una cadena de texto que indica si la inscripción fue exitosa o fallida, y en caso de falla, proporciona la razón.
   *
   * @param courseName
   * @param courseCatalog
   * @return A string with the result of the enrollment
   */
  public String enroll(String courseName, CourseCatalog courseCatalog) {
    EnrollmentStrategy strategy;
    switch (courseName) {
      case "Programming II":
        strategy = new ProgIIEnrollmentStrategy();
        break;
      case "Spanish":
        strategy = new SpanishEnrollmentStrategy();
        break;
      default:
        strategy = new DefaultEnrollmentStrategy();
        break;
    }

    return strategy.enroll(this, courseCatalog, courseName);
  }
}
