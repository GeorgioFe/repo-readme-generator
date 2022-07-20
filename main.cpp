#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    string repo, repoName, repoTitle;
    string styleString = "&style=for-the-badge\"/>";
    string colors[] = {"?color=red", "?color=blue", "?color=purple", "?color=green", "?color=yellow", "?color=pink", "?color=orange"};
    system("clear");
    cout << "Whose repository are we generating badges for? (Enter github username):" << endl;
    cin >> repoName;

    system("clear");
    cout << "Which repository are we generating badges for? (Enter repo name):" << endl;
    cin >> repoTitle;

    repo = repoName + "/" + repoTitle;

    string line1 = "<img alt=\"GitHub Language Count\" src=\"https://img.shields.io/github/languages/count/";
    string line2 = "<img alt=\"Github Repo Size\" src=\"https://img.shields.io/github/repo-size/";
    string line3 = "<img alt=\"GitHub Issues\" src=\"https://img.shields.io/github/issues/";
    string line4 ="<img alt=\"GitHub Closed Issues\" src=\"https://img.shields.io/github/issues-closed/";
    string line5 = "<img alt=\"GitHub Contributors\" src=\"https://img.shields.io/github/contributors/";
    string line6 = "<img alt=\"GitHub Commit Activity (Week)\" src=\"https://img.shields.io/github/commit-activity/w/";
    string line7 = "<img alt=\"GitHub File Count\" src=\"https://img.shields.io/github/directory-file-count/";

    string badge1 = line1 + repo + colors[0] + styleString;
    string badge2 = line2 + repo + colors[1] + styleString;
    string badge3 = line3 + repo + colors[2] + styleString;
    string badge5 = line5 + repo + colors[3] + styleString;
    string badge4 = line4 + repo + colors[4] + styleString;
    string badge6 = line6 + repo + colors[5] + styleString;
    string badge7 = line7 + repo + colors[6] + styleString;

    //Open File
    ofstream File("/Users/georgiofeghali/Desktop/README.md");
    // Write to the file
    File << "# ";
    File << repoTitle << endl;
    File << endl;
    File << "# Summary" << endl;
    File << endl;
    File << "<div>" << endl;
    File << badge1 << endl;
    File << badge2 << endl;
    File << badge3 << endl;
    File << badge4 << endl;
    File << badge5 << endl;
    File << badge6 << endl;
    File << badge7 << endl;
    File << "</div>" << endl;
    File << endl;
    File << "# References" << endl;
    File << endl;
    // Close the file
    File.close();

    system("clear");
    cout << "README.md for " + repoTitle + " has been generated!" << endl;

    return 0;
}