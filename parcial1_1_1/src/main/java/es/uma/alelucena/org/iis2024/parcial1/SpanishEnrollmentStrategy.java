package es.uma.alelucena.org.iis2024.parcial1;

public class SpanishEnrollmentStrategy implements EnrollmentStrategy{

    @Override
    public String enroll(Student student, CourseCatalog courseCatalog, String courseName) {
        if(!student.type.equals(Student.STUDENT_TYPE.VISITING)){
            return "Enrollment failed: The student must be a visiting student";
        }

        if(student.currentCourses.contains(courseName)){
            return "Enrollment failed: Already enrolled";
        }

        courseCatalog.enrollStudent(student.identifier,courseName);
        student.currentCourses.add(courseName);

        return "Enrollment successful";
    }
}
