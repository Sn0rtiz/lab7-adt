/*
 * Course: COEN 2220 - Programming 2
 * Name: [Sebastian Ortiz]
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: [10/1/2026]
 */

#include <iostream>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * TODO (Part C): Describe the study session durations managed by this ADT.
 *
 * Operations:
 * TODO (Part C): Describe addSession(minutes), including its result when the log cannot accept another session.
 * Adds one study session duration if the capacity of the array isn't full 
 * TODO (Part C): Describe totalMinutes().
 * It Returns the total number of minutes stored in the Array.
 * TODO (Part C): Describe longestSession() and its precondition.
 * It returns the longets secction stored in the array if the array is not empty. 
 * TODO (Part C): Describe size() and isEmpty().
 * They return the number of stored sessions and whether the log is empty, respectively.
 */
class StudySessionLog
{
private:
    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Add a fixed capacity constant of four study sessions.
    static const int CAPACITY = 4;
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    int sessionMinutes[CAPACITY];
    // TODO (Part D): Add an int that tracks how many study sessions are stored.
    int count;
public:
    // TODO (Part D): Write a constructor that creates an empty log.
    StudySessionLog()
    {
        count=0; // A new log begins with no stored study sessions.
    }

    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    bool addSession(int minutes)
    {
        bool added = false;
        if (count != CAPACITY)
        {
            cout << "Cannot add session. Log is full." << endl;
        }
        else
        {
            sessionMinutes[count] = minutes;
            count++;
            added = true;
        }
        return added;
    }
    // TODO (Part D): Write totalMinutes as a const member function.
    int totalMinutes() const
    {
        int total = 0;
        for (int i = 0; i < count; i++)
        {
            total += sessionMinutes[i];
        }
        return total;
    }
    // TODO (Part D): Write longestSession as a const member function.
    int longestSession() const
    {
        int longest = 0;
        for (int i = 0; i < count; i++)
        {
            if (sessionMinutes[i] > longest)
            {
                longest = sessionMinutes[i];
            }
        }
        return longest;
    }
    // TODO (Part D): Write size as a const member function.
    int size() const
    {
        return count;
    }
    // TODO (Part D): Write isEmpty as a const member function.
    bool isEmpty() const
    {
        bool empty = false;
        if (count == 0)
        {
            empty = true;
        }
        return empty;
    }
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}