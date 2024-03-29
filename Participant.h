#pragma once
#include <fstream>
#include <vector>
#include <set>

class Task {
 private:
  bool verdict;
  int contest_id = 0, rating = 0;
  std::set<std::string> tags;
  std::string handle;
 public:
  Task(const std::string &task);
  bool GetVerdict();
  std::set<std::string> GetTags();
  int GetRating();
  std::string GetHandle();
};

class Participant {
 private:
  int all_count = 0, solved_count = 0;
  std::vector<Task> tasks;
  std::string handle;
  bool CF_Avaliable = true;
  bool status = true;
 public:
  Participant(const std::string &file_name);
  int GetAllTask();
  int GetOKTask();
  std::vector<Task> ListAllTask();
  bool GetCFStatus();
  void RemakeInputFile(const std::string &input_file);
  std::pair<int, int> TagCount(const std::string &tag);
  std::string GetHandle();
};

