// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Match.h"
#include "visuals.h"

int main()
{
    // Create Blue Lock Line-Up
    Team Blue_Lock("Blue Lock");

    Player isagi{ "Isagi Yoichi", 17, "ST", "Japan" };
    isagi.update_team("Blue Lock");
    Blue_Lock.add_player(isagi);

    Player barou{ "Barou Shouei", 18, "ST", "Japan" };
    barou.update_team("Blue Lock");
    Blue_Lock.add_player(barou);

    Player nagi{ "Nagi Seishiro", 17, "CAM", "Japan" };
    nagi.update_team("Blue Lock");
    Blue_Lock.add_player(nagi);

    Player bachira{ "Bachira Meguru", 17, "CAM", "Japan" };
    bachira.update_team("Blue Lock");
    Blue_Lock.add_player(bachira);

    Player chigiri{ "Chigiri Hyoma", 17, "LW", "Japan" };
    chigiri.update_team("Blue Lock");
    Blue_Lock.add_player(chigiri);

    Player kunigami{ "Kunigami Rensuke", 18, "CF", "Japan" };
    kunigami.update_team("Blue Lock");
    Blue_Lock.add_player(kunigami);

    Player reo{ "Mikage Reo", 17, "CM", "Japan" };
    reo.update_team("Blue Lock");
    Blue_Lock.add_player(reo);

    Player rin{ "Itoshi Rin", 17, "ST", "Japan" };
    rin.update_team("Blue Lock");
    Blue_Lock.add_player(rin);

    Player jyubei{ "Aryu Jyubei", 18, "CB", "Japan" };
    jyubei.update_team("Blue Lock");
    Blue_Lock.add_player(jyubei);

    Player nanase{ "Nanase Nijiro", 17, "CDM", "Japan" };
    nanase.update_team("Blue Lock");
    Blue_Lock.add_player(nanase);

    Player karasu{ "Karasu Tabito", 17, "RW", "Japan" };
    karasu.update_team("Blue Lock");
    Blue_Lock.add_player(karasu);

    // Create Team Romania B)
    Team Romania("Romania");

    Player rares{ "Rares Deselnicu", 22, "ST", "Romania" };
    rares.update_team("Romania"); 
    Romania.add_player(rares); 

    Player ro_bi{ "Ro Bi", 20, "ST", "Romania" };
    ro_bi.update_team("Romania");
    Romania.add_player(ro_bi);

    Player nibu{ "nibu", 20, "RW", "Romania" };
    nibu.update_team("Romania");
    Romania.add_player(nibu);

    Player munti{ "Munteanu", 20, "CM", "Romania" };
    munti.update_team("Romania");
    Romania.add_player(munti);

    Player florin{ "Stancu Florin", 17, "GK", "Romania" };
    florin.update_team("Romania");
    Romania.add_player(florin);

    Player marian{ "Tudor Marian", 21, "LB", "Romania" };
    marian.update_team("Romania");
    Romania.add_player(marian);

    Player daniel{ "Vasile Daniel", 18, "RB", "Romania" };
    daniel.update_team("Romania");
    Romania.add_player(daniel);

    Player ciprian{ "Neagu Ciprian", 19, "CM", "Romania" };
    ciprian.update_team("Romania");
    Romania.add_player(ciprian);

    Player adrian{ "Marin Adrian", 17, "LW", "Romania" };
    adrian.update_team("Romania");
    Romania.add_player(adrian);

    Player bogdan{ "Rusu Bogdan", 20, "RW", "Romania" };
    bogdan.update_team("Romania");
    Romania.add_player(bogdan);

    Player sorin{ "Constantin Sorin", 19, "CB", "Romania" };
    sorin.update_team("Romania");
    Romania.add_player(sorin);

    // Create Team Red Dragons
    Team Red_Dragons("Red Dragons");

    Player drake{ "Drake Maxwell", 20, "ST", "England" };
    drake.update_team("Red Dragons");
    Red_Dragons.add_player(drake);

    Player finn{ "Finn Carter", 19, "CAM", "England" };
    finn.update_team("Red Dragons");
    Red_Dragons.add_player(finn);

    Player logan{ "Logan Pierce", 21, "CDM", "England" };
    logan.update_team("Red Dragons");
    Red_Dragons.add_player(logan);

    Player harvey{ "Harvey Stone", 20, "CB", "England" };
    harvey.update_team("Red Dragons");
    Red_Dragons.add_player(harvey);

    Player theo{ "Theo Blake", 19, "GK", "England" };
    theo.update_team("Red Dragons");
    Red_Dragons.add_player(theo);

    Player oliver{ "Oliver Shaw", 18, "LB", "England" };
    oliver.update_team("Red Dragons");
    Red_Dragons.add_player(oliver);

    Player zane{ "Zane Mercer", 21, "RB", "England" };
    zane.update_team("Red Dragons");
    Red_Dragons.add_player(zane);

    Player leo{ "Leo Ward", 20, "CM", "England" };
    leo.update_team("Red Dragons");
    Red_Dragons.add_player(leo);

    Player cole{ "Cole Fraser", 18, "RW", "England" };
    cole.update_team("Red Dragons");
    Red_Dragons.add_player(cole);

    Player jay{ "Jay Ashton", 19, "LW", "England" };
    jay.update_team("Red Dragons");
    Red_Dragons.add_player(jay);

    // Create Team Thunder Wolves
    Team Thunder_Wolves("Thunder Wolves");

    Player xavier{ "Xavier King", 22, "ST", "Germany" };
    xavier.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(xavier);

    Player lars{ "Lars Becker", 20, "CAM", "Germany" };
    lars.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(lars);

    Player karl{ "Karl Roth", 21, "CDM", "Germany" };
    karl.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(karl);

    Player otto{ "Otto Weber", 19, "CB", "Germany" };
    otto.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(otto);

    Player fabian{ "Fabian Richter", 18, "GK", "Germany" };
    fabian.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(fabian);

    Player ben{ "Ben Haas", 20, "LB", "Germany" };
    ben.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(ben);

    Player eric{ "Eric Wagner", 22, "RB", "Germany" };
    eric.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(eric);

    Player lucas{ "Lucas Müller", 21, "CM", "Germany" };
    lucas.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(lucas);

    Player max{ "Max Vogel", 20, "RW", "Germany" };
    max.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(max);

    Player tom{ "Tom Schmid", 22, "LW", "Germany" };
    tom.update_team("Thunder Wolves");
    Thunder_Wolves.add_player(tom);

    // Create Team Golden Phoenix
    Team Golden_Phoenix("Golden Phoenix");

    Player kenji{ "Kenji Tanaka", 23, "ST", "Japan" };
    kenji.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(kenji);

    Player ren{ "Ren Saito", 21, "CAM", "Japan" };
    ren.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(ren);

    Player shota{ "Shota Kato", 22, "CDM", "Japan" };
    shota.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(shota);

    Player daisuke{ "Daisuke Ito", 20, "CB", "Japan" };
    daisuke.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(daisuke);

    Player takumi{ "Takumi Suzuki", 21, "GK", "Japan" };
    takumi.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(takumi);

    Player kenta{ "Kenta Maeda", 23, "LB", "Japan" };
    kenta.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(kenta);

    Player yuto{ "Yuto Nakamura", 22, "RB", "Japan" };
    yuto.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(yuto);

    Player naoki{ "Naoki Yamamoto", 20, "CM", "Japan" };
    naoki.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(naoki);

    Player ryo{ "Ryo Fukuda", 21, "RW", "Japan" };
    ryo.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(ryo);

    Player yuki{ "Yuki Aoki", 22, "LW", "Japan" };
    yuki.update_team("Golden Phoenix");
    Golden_Phoenix.add_player(yuki);

    // Create Team Iron Giants
    Team Iron_Giants("Iron Giants");

    Player marcus{ "Marcus Johnson", 24, "ST", "USA" };
    marcus.update_team("Iron Giants");
    Iron_Giants.add_player(marcus);

    Player chris{ "Chris Evans", 23, "CAM", "USA" };
    chris.update_team("Iron Giants");
    Iron_Giants.add_player(chris);

    Player tyler{ "Tyler Brown", 25, "CDM", "USA" };
    tyler.update_team("Iron Giants");
    Iron_Giants.add_player(tyler);

    Player damien{ "Damien Green", 24, "CB", "USA" };
    damien.update_team("Iron Giants");
    Iron_Giants.add_player(damien);

    Player aaron{ "Aaron White", 22, "GK", "USA" };
    aaron.update_team("Iron Giants");
    Iron_Giants.add_player(aaron);

    Player ethan{ "Ethan Moore", 23, "LB", "USA" };
    ethan.update_team("Iron Giants");
    Iron_Giants.add_player(ethan);

    Player liam{ "Liam Taylor", 24, "RB", "USA" };
    liam.update_team("Iron Giants");
    Iron_Giants.add_player(liam);

    Player jacob{ "Jacob Hall", 23, "CM", "USA" };
    jacob.update_team("Iron Giants");
    Iron_Giants.add_player(jacob);

    Player isaac{ "Isaac Scott", 24, "RW", "USA" };
    isaac.update_team("Iron Giants");
    Iron_Giants.add_player(isaac);

    Player jackson{ "Jackson Lee", 25, "LW", "USA" };
    jackson.update_team("Iron Giants");
    Iron_Giants.add_player(jackson);

    // Create Team Emerald Eagles
    Team Emerald_Eagles("Emerald Eagles");

    Player andre{ "Andre Lemieux", 26, "ST", "France" };
    andre.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(andre);

    Player louis{ "Louis Dubois", 24, "CAM", "France" };
    louis.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(louis);

    Player remy{ "Remy Fontaine", 25, "CDM", "France" };
    remy.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(remy);

    Player hugo{ "Hugo Moreau", 23, "CB", "France" };
    hugo.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(hugo);

    Player adrien{ "Adrien Girard", 22, "GK", "France" };
    adrien.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(adrien);

    Player olivier{ "Olivier Renaud", 24, "LB", "France" };
    olivier.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(olivier);

    Player emile{ "Emile Lemoine", 25, "RB", "France" };
    emile.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(emile);

    Player luc{ "Luc Petit", 23, "CM", "France" };
    luc.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(luc);

    Player antoine{ "Antoine Leroy", 24, "RW", "France" };
    antoine.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(antoine);

    Player pierre{ "Pierre Garnier", 25, "LW", "France" };
    pierre.update_team("Emerald Eagles");
    Emerald_Eagles.add_player(pierre);

    // Create Team Silver Sharks
    Team Silver_Sharks("Silver Sharks");

    Player felix{ "Felix Berg", 23, "ST", "Norway" };
    felix.update_team("Silver Sharks");
    Silver_Sharks.add_player(felix);

    Player olav{ "Olav Hansen", 22, "CAM", "Norway" };
    olav.update_team("Silver Sharks");
    Silver_Sharks.add_player(olav);

    Player johan{ "Johan Eriksson", 25, "CDM", "Norway" };
    johan.update_team("Silver Sharks");
    Silver_Sharks.add_player(johan);

    Player nicolai{ "Nicolai Bjorn", 24, "CB", "Norway" };
    nicolai.update_team("Silver Sharks");
    Silver_Sharks.add_player(nicolai);

    Player erik{ "Erik Larsen", 23, "GK", "Norway" };
    erik.update_team("Silver Sharks");
    Silver_Sharks.add_player(erik);

    Player tor{ "Tor Andersen", 22, "LB", "Norway" };
    tor.update_team("Silver Sharks");
    Silver_Sharks.add_player(tor);

    Player leif{ "Leif Holberg", 25, "RB", "Norway" };
    leif.update_team("Silver Sharks");
    Silver_Sharks.add_player(leif);

    Player magnus{ "Magnus Storm", 23, "CM", "Norway" };
    magnus.update_team("Silver Sharks");
    Silver_Sharks.add_player(magnus);

    Player thor{ "Thor Foss", 24, "RW", "Norway" };
    thor.update_team("Silver Sharks");
    Silver_Sharks.add_player(thor);

    Player svein{ "Svein Nord", 23, "LW", "Norway" };
    svein.update_team("Silver Sharks");
    Silver_Sharks.add_player(svein);

    // Create Team Crimson Falcons
    Team Crimson_Falcons("Crimson Falcons");

    Player mario{ "Mario Rossi", 24, "ST", "Italy" };
    mario.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(mario);

    Player luca{ "Luca Bianchi", 22, "CAM", "Italy" };
    luca.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(luca);

    Player diego{ "Diego Romano", 23, "CDM", "Italy" };
    diego.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(diego);

    Player giuseppe{ "Giuseppe Conti", 25, "CB", "Italy" };
    giuseppe.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(giuseppe);

    Player leonardo{ "Leonardo Greco", 22, "GK", "Italy" };
    leonardo.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(leonardo);

    Player antonio{ "Antonio Rizzo", 24, "LB", "Italy" };
    antonio.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(antonio);

    Player vincenzo{ "Vincenzo Serra", 23, "RB", "Italy" };
    vincenzo.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(vincenzo);

    Player pietro{ "Pietro Ferri", 22, "CM", "Italy" };
    pietro.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(pietro);

    Player gianni{ "Gianni Caruso", 24, "RW", "Italy" };
    gianni.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(gianni);

    Player alessio{ "Alessio Bruno", 23, "LW", "Italy" };
    alessio.update_team("Crimson Falcons");
    Crimson_Falcons.add_player(alessio);

    // Create Team Midnight Panthers
    Team Midnight_Panthers("Midnight Panthers");

    Player dimitri{ "Dimitri Ivanov", 26, "ST", "Russia" };
    dimitri.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(dimitri);

    Player alexei{ "Alexei Kuznetsov", 24, "CAM", "Russia" };
    alexei.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(alexei);

    Player ivan{ "Ivan Sokolov", 25, "CDM", "Russia" };
    ivan.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(ivan);

    Player mikhail{ "Mikhail Petrov", 23, "CB", "Russia" };
    mikhail.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(mikhail);

    Player sergei{ "Sergei Volkov", 22, "GK", "Russia" };
    sergei.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(sergei);

    Player nikolai{ "Nikolai Romanov", 24, "LB", "Russia" };
    nikolai.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(nikolai);

    Player pavel{ "Pavel Orlov", 25, "RB", "Russia" };
    pavel.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(pavel);

    Player alex{ "Alex Popov", 23, "CM", "Russia" };
    alex.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(alex);

    Player vladimir{ "Vladimir Korolev", 24, "RW", "Russia" };
    vladimir.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(vladimir);

    Player dmitri{ "Dmitri Stepanov", 25, "LW", "Russia" };
    dmitri.update_team("Midnight Panthers");
    Midnight_Panthers.add_player(dmitri);

    //Creating League
    League Superliga;
    Superliga.add_team(Blue_Lock);
    Superliga.add_team(Romania);
    Superliga.add_team(Red_Dragons);
    Superliga.add_team(Thunder_Wolves);
    Superliga.add_team(Golden_Phoenix);
    Superliga.add_team(Iron_Giants);
    Superliga.add_team(Emerald_Eagles);
    Superliga.add_team(Silver_Sharks);
    Superliga.add_team(Crimson_Falcons);
    Superliga.add_team(Midnight_Panthers);

    Superliga.display_league();
    Superliga.schedule_matches();
    Sleep(3000);

    starting_interface();

    Superliga.simulate_league(true); 

    Superliga.display_league(); 
    Sleep(3000);

}
