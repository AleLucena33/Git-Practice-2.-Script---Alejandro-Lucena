package es.uma.alelucena.org.iis2024.parcial1;

public class DefaultEnrollmentStrategy implements EnrollmentStrategy{
    @Override
    public String enroll(Student student, CourseCatalog courseCatalog, String courseName) {
        if(student.currentCourses.contains(courseName)){
            return "Enrollment failed: Already enrolled";
        }
        if(!courseCatalog.contains(courseName)){
            return "Enrollment failed: the course is not in the courses catalog";
        }
        courseCatalog.enrollStudent(student.identifier, courseName);
        student.currentCourses.add(courseName);
        return "Enrollment successful";
    }
}
