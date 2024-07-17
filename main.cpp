#include <iostream>
#include <chrono>
#include <string>
#include <unordered_set>
#include <random>
#include <thread>

using namespace std;
using namespace std::chrono;

void play(unordered_set<string>& words) {

    cout << "------------------------" << endl;
    cout << "typ3 a5 fas7 4s po55ibl3" << endl;
    cout << "------------------------" << endl << endl;

    for (int i = 3; i > 0; --i) {
        cout << i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    high_resolution_clock::time_point startTime = high_resolution_clock::now();

    int correctCount = 0;
    const int totalWords = 10;

    for (int i = 0; i < totalWords; ++i) {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distr(0, words.size() - 1);

        int idx = distr(gen);
        auto it = words.begin();
        advance(it, idx);

        cout << "typ3: " << "'" << *it << "'" << endl;

        string input;
        getline(cin, input); 

        cout << endl;

        if (input == *it) {
            correctCount++;
            words.erase(it); 
        } 
    }

    auto endTime = high_resolution_clock::now();
    auto elapsedTime = duration_cast<seconds>(endTime - startTime).count();

    if (elapsedTime > 0) {

        double minutes = static_cast<double>(elapsedTime) / 60.0;
        double wpm = static_cast<double>(correctCount) / minutes;
        cout << "wpm: " << wpm << endl;
    }
}

int main() {
    unordered_set<string> futuristicWords = {
    "robot", "android", "cyborg", "nanotechnology", "hoverboard", "spacecraft", "virtual", "reality", "hologram", 
    "teleport", "telepathy", "neural", "implant", "quantum", "energy", "antigravity", "fusion", "laser", "beam",
    "exoskeleton", "bioengineered", "clone", "augmented", "intelligence", "genetic", "modification", "teleportation",
    "cyberspace", "biometric", "interface", "levitation", "singularity", "artificial", "intelligence", "android",
    "bionic", "telekinesis", "nanobot", "replicator", "interstellar", "wormhole", "moonbase", "galactic",
    "starship", "transhumanism", "solar", "panel", "fusion", "reactor", "plasma", "thruster", "hyperdrive",
    "space", "elevator", "gravity", "manipulation", "ion", "cannon", "orbital", "colony", "cryogenic",
    "stasis", "terraforming", "quantum", "entanglement", "cybernetic", "enhancement", 
    "interface", "dark", "matter", "warp", "drive", "time", "dilation", "electromagnetic", "pulse",
    "pulse", "laser", "neutrino", "detector", "orbit", "synthetic", "symbiosis", "exoplanet", "biodome",
    "alien", "encounter", "astrophysics", "singularity", "emergence", "nanofactory", "hyperloop", "biohack",
    "quantum", "computing", "neuromorphic", "algorithm", "cosmic", "radiation", "superconductor", "graviton"
    };

    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣤⣤⣤⣤⣴⣦⣤⣤⣤⣤⣤⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⣤⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⢀⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⠉⠉⠁⠀⠀⠀⠀⠀⠀⠈⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⢸⣿⣿⣿⣿⡿⠛⠛⠛⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠘⢻⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⣿⡟⠀⠀⠀⣀⠀⠀⠀⡐⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⣿⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⣿⡇⢀⠄⠉⣀⡀⢉⠁⣠⣶⣶⣶⣶⣤⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣿⣿⣿⣿⣿⡿⢁⠔⠀⠀⠪⢂⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠹⡇⢀⣴⣿⡿⢀⠀⠀⠉⠛⠛⠛⠿⣿⣿⣿⣿⣿⣿⣦⠀⡀⠀⠀⠀⠀⠀⢹⣿⣿⣿⡿⠋⠀⠁⠀⠀⠀⠀⢻⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⢀⣼⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠀⠀⠀⢉⠡⢀⡀⠀⠀⠀⠀⠀⠸⣿⣿⡟⠀⠀⠀⠐⠂⠀⠀⡠⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⣾⣿⡿⠛⠐⠂⠤⡐⠄⠀⢠⠀⠀⠊⠶⠛⠛⠛⠊⠥⠄⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠇⢸⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⢹⡏⠀⣀⣴⠶⠶⢾⠰⠀⠀⠀⠀⠀⠠⠤⠄⠂⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠘⠊⢸⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠣⡞⢟⠁⢀⠠⢘⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀⠀⢀⠆⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⡹⠂⠀⠀⡐⠁⠆⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⠃⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⢠⠁⠀⠀⡌⠀⡘⠀⠀⠀⠀⠀⠀⠀⢱⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⢸⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠈⠀⠀⢰⠀⢈⢃⡀⠀⢠⠐⠀⠀⠀⠁⠀⠀⠀⠀⠑⠄⠀⠀⠀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⣼⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠘⡀⠀⠀⠄⠀⠉⠁⠀⠀⠀⠀⣀⠠⠄⢀⣀⣤⣀⠀⠈⡄⡄⠀⢡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠐⡄⠀⡀⠀⢀⠤⠒⣈⣩⡤⢶⠞⠟⢙⠉⡋⣛⣿⡆⠀⡇⠀⡈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠈⢄⠐⢄⠠⣿⣿⡋⡁⢁⣀⣤⣷⣾⣿⣿⣿⢿⠃⠀⡇⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠈⠢⡀⠑⡜⢜⠻⣿⣿⡿⢻⣻⠹⠕⠋⢁⠊⠀⠀⠇⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠈⠢⠈⢄⠢⢀⣉⡁⠁⠀⠤⠐⠊⠀⠀⠀⠠⠰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡠⠂⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⡈⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠔⢁⠁⠀⠀⠀⠀⠀⠀⠀⠀⢀⠔⠀⠀⠀⠠⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠀⠘⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⢀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢄⠀⠀⠀⠀⠀⢀⠠⠔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡄⠱⡀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡰⠫⡁⠒⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡄⠈⠐⠠⡀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡔⠀⠀⢡⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡅⠀⠀⠀⠈⠰⡀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠀⠀⠀⠡⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀" << endl;
    cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀" << endl;

    cout << "-----------------------------------------------" << endl;
    cout << "w31c0me t0 th3 typ1n9 g4m3, pre55 ent3r t0 pl4y" << endl;
    cout << "-----------------------------------------------" << endl;

    string in;
    getline(cin, in);

    if (in == "") {
        play(futuristicWords);
    }

    return 0;
}

// my record: 35.2941