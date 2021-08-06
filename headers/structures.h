#ifndef STRUCTURES_H
#define STRUCTURES_H
#include <string>

//la configuration du script ce fait ici , donc desolee pour les non programmeur l'objet config permet de configurer le ssid , l'url de la page de connexion , le site de test pour verifier la connexion internet , refresh pour specifier le temps de rechargement de l'adresse mac , dev-data est un objets custom pour le developement


struct config {
    std::string user;
    std::string ssid;
    std::string url;
    std::string test_url;
    int refresh_time;
};

struct state {
    std::string statut;
    int reload;
    std::string wifi_name;
    std::string username;
    std::string app_name;
    std::string start_time;
};

struct time_c {
    int heures;
    int minutes;
    int secondes;
};

#endif // STRUCTURES_H
