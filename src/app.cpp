#include "../include/app.hpp"

// -------------------------------------------------------
App::App()
{
    menu();
}
// -------------------------------------------------------
void App::menu()
{

    sf::RenderWindow window(sf::VideoMode(x_SIZE, y_SIZE), "where");
    window.setFramerateLimit(60);

    sf::Texture texture;
    sf::Texture pag_2;
    sf::Texture help;
    sf::Texture welcome;
    sf::Texture user;
    sf::Texture back_grand;
    sf::Texture Back_icon;
    sf::Texture Lets_go_icon;
    sf::Texture help_icon;
    sf::Texture exit_icon;
    sf::Texture next_icon;
    sf::Texture Arrow_icon;
    sf::Texture Arrow2_icon;
    sf::Texture Arrow_orgin_icon;
    sf::Texture Aghdasiyeh_icon;
    sf::Texture Allameh_icon;
    sf::Texture Azadeghan_icon;
    sf::Texture Bimeh_icon;
    sf::Texture Boostan_icon;
    sf::Texture chahar_icon;
    sf::Texture Dowlat_icon;
    sf::Texture Shemiran_icon;
    sf::Texture sina_icon;
    sf::Texture Hossein_icon;
    sf::Texture sabz_icon;
    sf::Texture Ferdowsi_icon;
    sf::Texture Ghaem_icon;
    sf::Texture gheytariyeh_icon;
    sf::Texture Gholhak_icon;
    sf::Texture Haram_icon;
    sf::Texture haft_icon;
    sf::Texture javadiyeh_icon;
    sf::Texture Kashani_icon;
    sf::Texture Kahrizak_icon;
    sf::Texture Khajeh_icon;
    sf::Texture Kouhsar_icon;
    sf::Texture Jonoub_icon;
    sf::Texture Mahdiyeh_icon;
    sf::Texture Azadi_icon;
    sf::Texture Enghelab_icon;
    sf::Texture ValiAsar_icon;
    sf::Texture Jahad_icon;
    sf::Texture Shohada_icon;
    sf::Texture Mirdamad_icon;
    sf::Texture Shirazi_icon;
    sf::Texture Moniriyeh_icon;
    sf::Texture Nabard_icon;
    sf::Texture Niro_icon;
    sf::Texture Ostad_icon;
    sf::Texture Panzdah_icon;
    sf::Texture Payaneh_icon;
    sf::Texture pirozi_icon;
    sf::Texture Rahahan_icon;
    sf::Texture Shademan_icon;
    sf::Texture Ghodosi_icon;
    sf::Texture Beheshti_icon;
    sf::Texture Haghani_icon;
    sf::Texture Kolahdoz_icon;
    sf::Texture Mofatteh_icon;
    sf::Texture Rezaei_icon;
    sf::Texture Sadr_icon;
    sf::Texture Zeynoddin_icon;
    sf::Texture Shariati_icon;
    sf::Texture Rey_icon;
    sf::Texture Shoush_icon;
    sf::Texture sohrevardi_icon;
    sf::Texture Tajrish_icon;
    sf::Texture Taleghani_icon;
    sf::Texture Teater_icon;
    sf::Texture Pars_icon;
    sf::Texture Towhid_icon;
    sf::Texture Yadegar_icon;
    sf::Texture Zamzam_icon;

    try
    {
        texture.loadFromFile("picture/01.png");
        pag_2.loadFromFile("picture/02.png");
        help.loadFromFile("picture/03_help.png");
        welcome.loadFromFile("picture/04.png");
        user.loadFromFile("picture/6.png");
        back_grand.loadFromFile("picture/back1.png");
        Back_icon.loadFromFile("picture/Back.png");
        Lets_go_icon.loadFromFile("picture/let.png");
        help_icon.loadFromFile("picture/help.png");
        exit_icon.loadFromFile("picture/exit.png");
        next_icon.loadFromFile("picture/next.png");
        Arrow_icon.loadFromFile("picture/Arrow.png");
        Arrow2_icon.loadFromFile("picture/Arrow.png");
        Aghdasiyeh_icon.loadFromFile("picture/001.png");
        Azadeghan_icon.loadFromFile("picture/002.png");
        Bimeh_icon.loadFromFile("picture/003.png");
        Allameh_icon.loadFromFile("picture/000.png");
        Boostan_icon.loadFromFile("picture/004.png");
        chahar_icon.loadFromFile("picture/005.png");
        Dowlat_icon.loadFromFile("picture/006.png");
        Shemiran_icon.loadFromFile("picture/007.png");
        sina_icon.loadFromFile("picture/008.png");
        Hossein_icon.loadFromFile("picture/009.png");
        sabz_icon.loadFromFile("picture/010.png");
        Ferdowsi_icon.loadFromFile("picture/011.png");
        Ghaem_icon.loadFromFile("picture/012.png");
        gheytariyeh_icon.loadFromFile("picture/013.png");
        Gholhak_icon.loadFromFile("picture/014.png");
        Haram_icon.loadFromFile("picture/015.png");
        haft_icon.loadFromFile("picture/016.png");
        javadiyeh_icon.loadFromFile("picture/017.png");
        Kashani_icon.loadFromFile("picture/018.png");
        Kahrizak_icon.loadFromFile("picture/019.png");
        Khajeh_icon.loadFromFile("picture/020.png");
        Kouhsar_icon.loadFromFile("picture/022.png");
        Jonoub_icon.loadFromFile("picture/021.png");
        Mahdiyeh_icon.loadFromFile("picture/023.png");
        Azadi_icon.loadFromFile("picture/024.png");
        Enghelab_icon.loadFromFile("picture/025.png");
        ValiAsar_icon.loadFromFile("picture/026.png");
        Jahad_icon.loadFromFile("picture/027.png");
        Shohada_icon.loadFromFile("picture/028.png");
        Mirdamad_icon.loadFromFile("picture/029.png");
        Shirazi_icon.loadFromFile("picture/030.png");
        Moniriyeh_icon.loadFromFile("picture/031.png");
        Nabard_icon.loadFromFile("picture/032.png");
        Niro_icon.loadFromFile("picture/033.png");
        Ostad_icon.loadFromFile("picture/034.png");
        Panzdah_icon.loadFromFile("picture/035.png");
        Payaneh_icon.loadFromFile("picture/036.png");
        pirozi_icon.loadFromFile("picture/037.png");
        Rahahan_icon.loadFromFile("picture/038.png");
        Shademan_icon.loadFromFile("picture/039.png");
        Ghodosi_icon.loadFromFile("picture/040.png");
        Beheshti_icon.loadFromFile("picture/041.png");
        Haghani_icon.loadFromFile("picture/042.png");
        Kolahdoz_icon.loadFromFile("picture/043.png");
        Mofatteh_icon.loadFromFile("picture/044.png");
        Rezaei_icon.loadFromFile("picture/045.png");
        Sadr_icon.loadFromFile("picture/046.png");
        Zeynoddin_icon.loadFromFile("picture/047.png");
        Shariati_icon.loadFromFile("picture/048.png");
        Rey_icon.loadFromFile("picture/049.png");
        Shoush_icon.loadFromFile("picture/050.png");
        sohrevardi_icon.loadFromFile("picture/051.png");
        Tajrish_icon.loadFromFile("picture/052.png");
        Taleghani_icon.loadFromFile("picture/053.png");
        Teater_icon.loadFromFile("picture/054.png");
        Pars_icon.loadFromFile("picture/055.png");
        Towhid_icon.loadFromFile("picture/056.png");
        Yadegar_icon.loadFromFile("picture/057.png");
        Zamzam_icon.loadFromFile("picture/058.png");
        Arrow_orgin_icon.loadFromFile("picture/b1.png");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    sf::RectangleShape texture_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape pag_2_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape help_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape welcome_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape user_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape back_grand_shape(sf::Vector2f(x_SIZE, y_SIZE));
    sf::RectangleShape Lets_go_Icon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape exitIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape helpIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape BackIcon_shape(sf::Vector2f(316, 50));
    sf::RectangleShape nextIcon_shape(sf::Vector2f(199, 39));
    sf::RectangleShape ArrowIcon_shape(sf::Vector2f(17, 16));
    sf::RectangleShape Arrow2Icon_shape(sf::Vector2f(17, 16));
    sf::RectangleShape AghdasiyehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape AzadeghanIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape BimehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape AllamehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape BoostanIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape chaharIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape DowlatIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ShemiranIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape SinaIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape HosseinIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape SabzIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape FerdowsiIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape GhaemIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape GheytariyehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape GolhakIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape HarmIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape haftIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape javadiyehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape KashaniIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape KahrizakIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape KhajehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape JonoubIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape KouhsarIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape MahdiyehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape AzadiIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape EnghelabIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ValiAsarIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape JahadIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ShohadaIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape MirdamadIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ShiraziIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape MoniriyehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape NabardIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape NiroIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape OstadIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape PanzdahIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape PayanehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape piroziIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape RahahanIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ShademanIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape GhodosiIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape BeheshtiIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape HaghaniIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape KolahdozIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape MofattehIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape RezaeiIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape SadrIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ZeynoddinIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ShariatiIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ReyIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ShoushIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape sohrevardiIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape TajrishIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape TaleghaniIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape TeaterIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ParsIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape TowhidIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape YadegarIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape ZamzamIcon_shape(sf::Vector2f(82, 21));
    sf::RectangleShape Arrow_orginIcon_shape(sf::Vector2f(17, 16));

    texture_shape.setTexture(&texture);
    pag_2_shape.setTexture(&pag_2);
    help_shape.setTexture(&help);
    welcome_shape.setTexture(&welcome);
    user_shape.setTexture(&user);
    back_grand_shape.setTexture(&back_grand);
    Lets_go_Icon_shape.setTexture(&Lets_go_icon);
    exitIcon_shape.setTexture(&exit_icon);
    helpIcon_shape.setTexture(&help_icon);
    BackIcon_shape.setTexture(&Back_icon);
    nextIcon_shape.setTexture(&next_icon);
    ArrowIcon_shape.setTexture(&Arrow_icon);
    Arrow2Icon_shape.setTexture(&Arrow_icon);
    AghdasiyehIcon_shape.setTexture(&Aghdasiyeh_icon);
    AzadeghanIcon_shape.setTexture(&Azadeghan_icon);
    BimehIcon_shape.setTexture(&Bimeh_icon);
    AllamehIcon_shape.setTexture(&Allameh_icon);
    BoostanIcon_shape.setTexture(&Boostan_icon);
    chaharIcon_shape.setTexture(&chahar_icon);
    DowlatIcon_shape.setTexture(&Dowlat_icon);
    ShemiranIcon_shape.setTexture(&Shemiran_icon);
    SinaIcon_shape.setTexture(&sina_icon);
    HosseinIcon_shape.setTexture(&Hossein_icon);
    SabzIcon_shape.setTexture(&sabz_icon);
    FerdowsiIcon_shape.setTexture(&Ferdowsi_icon);
    GhaemIcon_shape.setTexture(&Ghaem_icon);
    GheytariyehIcon_shape.setTexture(&gheytariyeh_icon);
    GolhakIcon_shape.setTexture(&Gholhak_icon);
    HarmIcon_shape.setTexture(&Haram_icon);
    haftIcon_shape.setTexture(&haft_icon);
    javadiyehIcon_shape.setTexture(&javadiyeh_icon);
    KashaniIcon_shape.setTexture(&Kashani_icon);
    KahrizakIcon_shape.setTexture(&Kahrizak_icon);
    KhajehIcon_shape.setTexture(&Khajeh_icon);
    KouhsarIcon_shape.setTexture(&Kouhsar_icon);
    JonoubIcon_shape.setTexture(&Jonoub_icon);
    MahdiyehIcon_shape.setTexture(&Mahdiyeh_icon);
    AzadiIcon_shape.setTexture(&Azadi_icon);
    EnghelabIcon_shape.setTexture(&Enghelab_icon);
    ValiAsarIcon_shape.setTexture(&ValiAsar_icon);
    JahadIcon_shape.setTexture(&Jahad_icon);
    ShohadaIcon_shape.setTexture(&Shohada_icon);
    MirdamadIcon_shape.setTexture(&Mirdamad_icon);
    ShiraziIcon_shape.setTexture(&Shirazi_icon);
    MoniriyehIcon_shape.setTexture(&Moniriyeh_icon);
    NabardIcon_shape.setTexture(&Nabard_icon);
    NiroIcon_shape.setTexture(&Niro_icon);
    OstadIcon_shape.setTexture(&Ostad_icon);
    PanzdahIcon_shape.setTexture(&Panzdah_icon);
    PayanehIcon_shape.setTexture(&Payaneh_icon);
    piroziIcon_shape.setTexture(&pirozi_icon);
    RahahanIcon_shape.setTexture(&Rahahan_icon);
    ShademanIcon_shape.setTexture(&Shademan_icon);
    GhodosiIcon_shape.setTexture(&Ghodosi_icon);
    BeheshtiIcon_shape.setTexture(&Beheshti_icon);
    HaghaniIcon_shape.setTexture(&Haghani_icon);
    KolahdozIcon_shape.setTexture(&Kolahdoz_icon);
    MofattehIcon_shape.setTexture(&Mofatteh_icon);
    RezaeiIcon_shape.setTexture(&Rezaei_icon);
    SadrIcon_shape.setTexture(&Sadr_icon);
    ZeynoddinIcon_shape.setTexture(&Zeynoddin_icon);
    ShariatiIcon_shape.setTexture(&Shariati_icon);
    ReyIcon_shape.setTexture(&Rey_icon);
    ShoushIcon_shape.setTexture(&Shoush_icon);
    sohrevardiIcon_shape.setTexture(&sohrevardi_icon);
    TajrishIcon_shape.setTexture(&Tajrish_icon);
    TaleghaniIcon_shape.setTexture(&Taleghani_icon);
    TeaterIcon_shape.setTexture(&Teater_icon);
    ParsIcon_shape.setTexture(&Pars_icon);
    TowhidIcon_shape.setTexture(&Towhid_icon);
    YadegarIcon_shape.setTexture(&Yadegar_icon);
    ZamzamIcon_shape.setTexture(&Zamzam_icon);
    Arrow_orginIcon_shape.setTexture(&Arrow_orgin_icon);

    Lets_go_Icon_shape.setPosition(sf::Vector2f(24, 360));
    exitIcon_shape.setPosition(sf::Vector2f(24, 438));
    helpIcon_shape.setPosition(sf::Vector2f(24, 512));
    BackIcon_shape.setPosition(sf::Vector2f(22, 741));
    nextIcon_shape.setPosition(sf::Vector2f(90, 710));
    ArrowIcon_shape.setPosition(sf::Vector2f(322, 250));
    Arrow2Icon_shape.setPosition(sf::Vector2f(322, 328));
    AghdasiyehIcon_shape.setPosition(sf::Vector2f(261, 62));
    AzadeghanIcon_shape.setPosition(sf::Vector2f(261, 116));
    BimehIcon_shape.setPosition(sf::Vector2f(261, 143));
    AllamehIcon_shape.setPosition(sf::Vector2f(261, 89));
    BoostanIcon_shape.setPosition(sf::Vector2f(261, 170));
    chaharIcon_shape.setPosition(sf::Vector2f(261, 197));
    DowlatIcon_shape.setPosition(sf::Vector2f(261, 224));
    ShemiranIcon_shape.setPosition(sf::Vector2f(261, 251));
    SinaIcon_shape.setPosition(sf::Vector2f(261, 278));
    HosseinIcon_shape.setPosition(sf::Vector2f(261, 305));
    SabzIcon_shape.setPosition(sf::Vector2f(261, 332));
    FerdowsiIcon_shape.setPosition(sf::Vector2f(261, 359));
    GhaemIcon_shape.setPosition(sf::Vector2f(261, 386));
    GheytariyehIcon_shape.setPosition(sf::Vector2f(261, 413));
    GolhakIcon_shape.setPosition(sf::Vector2f(261, 440));
    HarmIcon_shape.setPosition(sf::Vector2f(261, 467));
    haftIcon_shape.setPosition(sf::Vector2f(261, 494));
    javadiyehIcon_shape.setPosition(sf::Vector2f(261, 521));
    KashaniIcon_shape.setPosition(sf::Vector2f(261, 548));
    KahrizakIcon_shape.setPosition(sf::Vector2f(150, 125));
    KhajehIcon_shape.setPosition(sf::Vector2f(150, 152));
    KouhsarIcon_shape.setPosition(sf::Vector2f(150, 179));
    JonoubIcon_shape.setPosition(sf::Vector2f(150, 206));
    MahdiyehIcon_shape.setPosition(sf::Vector2f(150, 233));
    AzadiIcon_shape.setPosition(sf::Vector2f(150, 260));
    EnghelabIcon_shape.setPosition(sf::Vector2f(150, 287));
    ValiAsarIcon_shape.setPosition(sf::Vector2f(150, 314));
    JahadIcon_shape.setPosition(sf::Vector2f(150, 341));
    ShohadaIcon_shape.setPosition(sf::Vector2f(150, 368));
    MirdamadIcon_shape.setPosition(sf::Vector2f(150, 395));
    ShiraziIcon_shape.setPosition(sf::Vector2f(150, 422));
    MoniriyehIcon_shape.setPosition(sf::Vector2f(150, 449));
    NabardIcon_shape.setPosition(sf::Vector2f(150, 479));
    NiroIcon_shape.setPosition(sf::Vector2f(150, 503));
    OstadIcon_shape.setPosition(sf::Vector2f(150, 530));
    PanzdahIcon_shape.setPosition(sf::Vector2f(150, 557));
    PayanehIcon_shape.setPosition(sf::Vector2f(150, 584));
    piroziIcon_shape.setPosition(sf::Vector2f(150, 611));
    RahahanIcon_shape.setPosition(sf::Vector2f(150, 638));
    ShademanIcon_shape.setPosition(sf::Vector2f(150, 665));
    GhodosiIcon_shape.setPosition(sf::Vector2f(38, 193));
    BeheshtiIcon_shape.setPosition(sf::Vector2f(38, 220));
    HaghaniIcon_shape.setPosition(sf::Vector2f(38, 247));
    KolahdozIcon_shape.setPosition(sf::Vector2f(38, 274));
    MofattehIcon_shape.setPosition(sf::Vector2f(38, 301));
    RezaeiIcon_shape.setPosition(sf::Vector2f(38, 328));
    SadrIcon_shape.setPosition(sf::Vector2f(38, 355));
    ZeynoddinIcon_shape.setPosition(sf::Vector2f(38, 382));
    ShariatiIcon_shape.setPosition(sf::Vector2f(38, 409));
    ReyIcon_shape.setPosition(sf::Vector2f(38, 436));
    ShoushIcon_shape.setPosition(sf::Vector2f(38, 463));
    sohrevardiIcon_shape.setPosition(sf::Vector2f(38, 490));
    TajrishIcon_shape.setPosition(sf::Vector2f(38, 517));
    TaleghaniIcon_shape.setPosition(sf::Vector2f(38, 544));
    TeaterIcon_shape.setPosition(sf::Vector2f(38, 571));
    ParsIcon_shape.setPosition(sf::Vector2f(38, 598));
    TowhidIcon_shape.setPosition(sf::Vector2f(38, 625));
    YadegarIcon_shape.setPosition(sf::Vector2f(38, 652));
    ZamzamIcon_shape.setPosition(sf::Vector2f(38, 679));
    Arrow_orginIcon_shape.setPosition(sf::Vector2f(38, 782));

    graph.readGraphFromFile(filename);

    sf::Font font;
    if (!font.loadFromFile("font.TTF"))
    { // Load a font
        throw runtime_error("Error: Unable to load font.");
    }
    sf::Text orgin;
    orgin.setFont(font);
    orgin.setCharacterSize(16);
    orgin.setFillColor(sf::Color::Black); // Set the text color
    orgin.setPosition(319, 44);

    while (window.isOpen())
    {
        sf ::Event event;
        sf::Vector2f mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::EventType::Closed)
            {
                window.close();
            }
        }
        if (clock.getElapsedTime() < sf::seconds(2) && flag_1_page)
        {
            window.clear();
            window.draw(texture_shape);
        }
        else
        {
            flag_1_page = false;
            if (!flag)
            {
                window.clear();
                window.draw(help_shape);
                // window.setFramerateLimit(1);
                window.draw(BackIcon_shape);
            }
            else if (flag)
            {
                window.clear();
                window.draw(pag_2_shape);
                window.draw(Lets_go_Icon_shape);
                window.draw(exitIcon_shape);
                window.draw(helpIcon_shape);
            }
            if (!flag_w)
            {
                window.clear();
                window.draw(welcome_shape);
                window.draw(nextIcon_shape);
            }
            if (!falg_user)
            {

                window.clear();
                window.draw(user_shape);
                window.draw(ArrowIcon_shape);
                window.draw(Arrow2Icon_shape);
                // window.draw(orgin);
            }
            if (!flag_Arrow1)
            {
                window.clear();
                window.draw(back_grand_shape);
                window.draw(AghdasiyehIcon_shape);
                window.draw(AzadeghanIcon_shape);
                window.draw(BimehIcon_shape);
                window.draw(AllamehIcon_shape);
                window.draw(BoostanIcon_shape);
                window.draw(chaharIcon_shape);
                window.draw(DowlatIcon_shape);
                window.draw(ShemiranIcon_shape);
                window.draw(SinaIcon_shape);
                window.draw(HosseinIcon_shape);
                window.draw(SabzIcon_shape);
                window.draw(FerdowsiIcon_shape);
                window.draw(GhaemIcon_shape);
                window.draw(GheytariyehIcon_shape);
                window.draw(GolhakIcon_shape);
                window.draw(HarmIcon_shape);
                window.draw(haftIcon_shape);
                window.draw(javadiyehIcon_shape);
                window.draw(KashaniIcon_shape);
                window.draw(KahrizakIcon_shape);
                window.draw(KhajehIcon_shape);
                window.draw(KouhsarIcon_shape);
                window.draw(JonoubIcon_shape);
                window.draw(MahdiyehIcon_shape);
                window.draw(AzadiIcon_shape);
                window.draw(EnghelabIcon_shape);
                window.draw(ValiAsarIcon_shape);
                window.draw(JahadIcon_shape);
                window.draw(ShademanIcon_shape);
                window.draw(ShohadaIcon_shape);
                window.draw(MirdamadIcon_shape);
                window.draw(ShiraziIcon_shape);
                window.draw(MoniriyehIcon_shape);
                window.draw(NabardIcon_shape);
                window.draw(NiroIcon_shape);
                window.draw(OstadIcon_shape);
                window.draw(PanzdahIcon_shape);
                window.draw(PayanehIcon_shape);
                window.draw(piroziIcon_shape);
                window.draw(RahahanIcon_shape);
                window.draw(ShademanIcon_shape);
                window.draw(GhodosiIcon_shape);
                window.draw(BeheshtiIcon_shape);
                window.draw(HaghaniIcon_shape);
                window.draw(KolahdozIcon_shape);
                window.draw(MofattehIcon_shape);
                window.draw(RezaeiIcon_shape);
                window.draw(SadrIcon_shape);
                window.draw(ZeynoddinIcon_shape);
                window.draw(ShariatiIcon_shape);
                window.draw(ReyIcon_shape);
                window.draw(ShoushIcon_shape);
                window.draw(sohrevardiIcon_shape);
                window.draw(TajrishIcon_shape);
                window.draw(TaleghaniIcon_shape);
                window.draw(TeaterIcon_shape);
                window.draw(ParsIcon_shape);
                window.draw(TowhidIcon_shape);
                window.draw(YadegarIcon_shape);
                window.draw(ZamzamIcon_shape);
                window.draw(Arrow_orginIcon_shape);
            }
            if (ArrowIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag_Arrow1 = false;
                }
            }
            if (Lets_go_Icon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag_w = false;
                }
            }
            if (exitIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    window.close();
                }
            }
            if (BackIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {

                    flag = true;
                }
            }
            if (helpIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag = false;
                }
            }
            if (nextIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    falg_user = false;
                }
            }
        }

        window.display();
    }
}
