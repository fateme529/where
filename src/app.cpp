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
    // sf::RenderWindow window2(sf::VideoMode(x_SIZE, y_SIZE), "where2");
    window.setFramerateLimit(60);
    // window2.setFramerateLimit(60);

    sf::Texture texture;
    // sf::Texture texture2;
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

    try
    {
        texture.loadFromFile("picture/01.png");
        // texture2.loadFromFile("picture/01.png"); // need  edit
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

        Arrow_orgin_icon.loadFromFile("picture/b1.png");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    sf::RectangleShape texture_shape(sf::Vector2f(x_SIZE, y_SIZE));
    // sf::RectangleShape texture2_shape(sf::Vector2f(x_SIZE, y_SIZE));
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
    sf::RectangleShape ArrowIcon_shape(sf::Vector2f(17, 16));  // orgin
    sf::RectangleShape Arrow2Icon_shape(sf::Vector2f(17, 16)); // destination

    sf::RectangleShape Arrow_orginIcon_shape(sf::Vector2f(17, 16));

    texture_shape.setTexture(&texture);
    // texture2_shape.setTexture(&texture);
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

    Arrow_orginIcon_shape.setTexture(&Arrow_orgin_icon);

    Lets_go_Icon_shape.setPosition(sf::Vector2f(24, 360));
    exitIcon_shape.setPosition(sf::Vector2f(24, 438));
    helpIcon_shape.setPosition(sf::Vector2f(24, 512));
    BackIcon_shape.setPosition(sf::Vector2f(22, 741));
    nextIcon_shape.setPosition(sf::Vector2f(90, 710));
    ArrowIcon_shape.setPosition(sf::Vector2f(337, 251));
    Arrow2Icon_shape.setPosition(sf::Vector2f(337, 328));
    Arrow_orginIcon_shape.setPosition(sf::Vector2f(38, 782));

    // graph.readGraphFromFile(filename);

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
        // while (window2.pollEvent(event2))
        // {
        //     if (event.type == sf::Event::EventType::Closed)
        //     {
        //         window2.close();
        //     }
        // }
        if (clock.getElapsedTime() < sf::seconds(2) && flag_1_page)
        {
            window.clear();
            window.draw(texture_shape);
            // window2.draw(texture_shape);
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

                window.close(); // بستن صفحه اول
                break;
                // window2.clear();
            }
            // if (!flag_Arrow_Back)
            // {
            //     falg_user = false;
            //     flag_Arrow1 = true;
            //     flag_Arrow_Back = true;
            // }

            if (Arrow_orginIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag_Arrow_Back = false;
                }
            }
            if (ArrowIcon_shape.getGlobalBounds().contains(mouse))
            {
                if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    flag_Arrow1 = false;

                    // falg_user = true;
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
        // window2.display();
    }
}

void App::window2()
{
    sf::RenderWindow window2(sf::VideoMode(x_SIZE, y_SIZE), "Window 2");
    sf ::Event event;
    sf::Vector2f mouse = window2.mapPixelToCoords(sf::Mouse::getPosition(window2));

    while (window2.pollEvent(event))
    {
        if (event.type == sf::Event::EventType::Closed)
        {
            window2.close();
        }
    }
    sf::Texture texture2;
    sf::Texture user;
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
    texture2.loadFromFile("picture/back1.png"); // need  edit
    user.loadFromFile("picture/6.png");
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

    sf::RectangleShape user_shape(sf::Vector2f(x_SIZE, y_SIZE));
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
    sf::RectangleShape texture2_shape(sf::Vector2f(x_SIZE, y_SIZE));

    texture2_shape.setTexture(&texture2);
    user_shape.setTexture(&user);
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

    while (window2.isOpen())
    {
        sf::Event event;
        while (window2.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window2.close();
        }
        if (!flag_Arrow1)
        {
            window2.clear();
            window2.draw(texture2_shape);
            // window2.draw(back_grand_shape);
            window2.draw(AghdasiyehIcon_shape);
            window2.draw(AzadeghanIcon_shape);
            window2.draw(BimehIcon_shape);
            window2.draw(AllamehIcon_shape);
            window2.draw(BoostanIcon_shape);
            window2.draw(chaharIcon_shape);
            window2.draw(DowlatIcon_shape);
            window2.draw(ShemiranIcon_shape);
            window2.draw(SinaIcon_shape);
            window2.draw(HosseinIcon_shape);
            window2.draw(SabzIcon_shape);
            window2.draw(FerdowsiIcon_shape);
            window2.draw(GhaemIcon_shape);
            window2.draw(GheytariyehIcon_shape);
            window2.draw(GolhakIcon_shape);
            window2.draw(HarmIcon_shape);
            window2.draw(haftIcon_shape);
            window2.draw(javadiyehIcon_shape);
            window2.draw(KashaniIcon_shape);
            window2.draw(KahrizakIcon_shape);
            window2.draw(KhajehIcon_shape);
            window2.draw(KouhsarIcon_shape);
            window2.draw(JonoubIcon_shape);
            window2.draw(MahdiyehIcon_shape);
            window2.draw(AzadiIcon_shape);
            window2.draw(EnghelabIcon_shape);
            window2.draw(ValiAsarIcon_shape);
            window2.draw(JahadIcon_shape);
            window2.draw(ShademanIcon_shape);
            window2.draw(ShohadaIcon_shape);
            window2.draw(MirdamadIcon_shape);
            window2.draw(ShiraziIcon_shape);
            window2.draw(MoniriyehIcon_shape);
            window2.draw(NabardIcon_shape);
            window2.draw(NiroIcon_shape);
            window2.draw(OstadIcon_shape);
            window2.draw(PanzdahIcon_shape);
            window2.draw(PayanehIcon_shape);
            window2.draw(piroziIcon_shape);
            window2.draw(RahahanIcon_shape);
            window2.draw(ShademanIcon_shape);
            window2.draw(GhodosiIcon_shape);
            window2.draw(BeheshtiIcon_shape);
            window2.draw(HaghaniIcon_shape);
            window2.draw(KolahdozIcon_shape);
            window2.draw(MofattehIcon_shape);
            window2.draw(RezaeiIcon_shape);
            window2.draw(SadrIcon_shape);
            window2.draw(ZeynoddinIcon_shape);
            window2.draw(ShariatiIcon_shape);
            window2.draw(ReyIcon_shape);
            window2.draw(ShoushIcon_shape);
            window2.draw(sohrevardiIcon_shape);
            window2.draw(TajrishIcon_shape);
            window2.draw(TaleghaniIcon_shape);
            window2.draw(TeaterIcon_shape);
            window2.draw(ParsIcon_shape);
            window2.draw(TowhidIcon_shape);
            window2.draw(YadegarIcon_shape);
            window2.draw(ZamzamIcon_shape);
            // window2.draw(Arrow_orginIcon_shape);
        }
        // else if(!flag_000)
        // {
        //     // flag_Arrow_Back=false;
        //     window2.clear();
        //     window2.close();
        //     break;
        //     // window2.close();
        //    // window2.draw(user_shape);
        //     // flag_Arrow1 = false;
        //     // flag_just_one = false;
        //     // window.draw(ArrowIcon_shape);
        //    // window.draw(Arrow2Icon_shape);

        //    // window2.draw(p000);
        // }

        // else if (!flag_001)
        // {
        //     // flag_Arrow_Back=false;
        //     window2.clear();
        //     // window2.close();
        //     window.draw(user_shape);
        //     // flag_Arrow1 = false;
        //     // flag_just_one = false;
        //     // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);

        //     window.draw(p001);
        // }

        // else if (!flag_002)
        // {
        //     // flag_Arrow_Back=false;
        //     window.clear();
        //     window.draw(user_shape);
        //     // flag_Arrow1 = false;
        //     // flag_just_one = false;
        //     // flag_just_one=false;

        //     window.draw(Arrow2Icon_shape);

        //     window.draw(p002);
        // }
        // else if (!flag_003)
        // {
        //     //  flag_Arrow_Back=false;
        //     window.clear();
        //     window.draw(user_shape);
        //     // flag_Arrow1 = false;
        //     // flag_just_one = false;
        //     // flag_just_one=false;

        //     window.draw(Arrow2Icon_shape);

        //     window.draw(p003);
        // }
        // else if (!flag_004)
        // {
        //     // flag_Arrow_Back=false;
        //     window.clear();
        //     window.draw(user_shape);
        //     // flag_Arrow1 = false;
        //     // flag_just_one = false;

        //     window.draw(Arrow2Icon_shape);

        //     window.draw(p004);
        // }
        // else if (!flag_005)
        // {
        //     // flag_Arrow_Back=false;
        //     window.clear();
        //     window.draw(user_shape);
        //     // flag_Arrow1 = false;
        //     // flag_just_one = false;

        //     window.draw(Arrow2Icon_shape);

        //     window.draw(p005);
        // }

        // else if (!flag_006 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //     flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p006);
        // }
        // else if (!flag_007 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //     flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p007);
        // }
        // else if (!flag_008 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //     flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p008);
        // }
        // else if (!flag_009 && !type)
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //     flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p009);
        // }
        // else if (!flag_010 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //     flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p010);
        // }
        // else if (!flag_011 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p011);
        // }
        // else if (!flag_012 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p012);
        // }
        // else if (!flag_013 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p013);
        // }
        // else if (!flag_014 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p014);
        // }
        // else if (!flag_015 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p015);
        // }
        // else if (!flag_016 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p016);
        // }
        // else if (!flag_017 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p017);
        // }
        // else if (!flag_018 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p018);
        // }
        // else if (!flag_019 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p019);
        // }
        // else if (!flag_020 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p020);
        // }
        // else if (!flag_021 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p021);
        // }
        // else if (!flag_022 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p022);
        // }
        // else if (!flag_023 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p023);
        // }
        // else if (!flag_024 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p024);
        // }
        // else if (!flag_025 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p025);
        // }
        // else if (!flag_026 && !type)
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p026);
        // }
        // else if (!flag_027 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p027);
        // }
        // else if (!flag_028 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p028);
        // }
        // else if (!flag_029 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p029);
        // }
        // else if (!flag_030 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p030);
        // }
        // else if (!flag_031 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p031);
        // }
        // else if (!flag_032 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     window.draw(ArrowIcon_shape);
        //    // window.draw(Arrow2Icon_shape);
        //     window.draw(p032);
        // }
        // else if (!flag_033 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p033);
        // }
        // else if (!flag_034 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p034);
        // }
        // else if (!flag_035 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p035);
        // }
        // else if (!flag_036 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p036);
        // }
        // else if (!flag_037 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p037);
        // }
        // else if (!flag_038 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p038);
        // }
        // else if (!flag_039 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;

        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p039);
        // }
        // else if (!flag_040 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p040);
        // }
        // else if (!flag_041 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p041);
        // }
        // else if (!flag_042 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p042);
        // }
        // else if (!flag_043 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p043);
        // }
        // else if (!flag_044 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p044);
        // }
        // else if (!flag_045 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p045);
        // }
        // else if (!flag_046 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p046);
        // }
        // else if (!flag_047 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p047);
        // }
        // else if (!flag_048 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p048);
        // }
        // else if (!flag_049 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p049);
        // }
        // else if (!flag_050 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p050);
        // }
        // else if (!flag_051 && !type)
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p051);
        // }
        // else if (!flag_052 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p052);
        // }
        // else if (!flag_053 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p053);
        // }
        // else if (!flag_054 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p054);
        // }
        // else if (!flag_055 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p055);
        // }
        // else if (!flag_056 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //      flag_just_one = false;
        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p056);
        // }
        // else if (!flag_057 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;

        //     //window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p057);
        // }
        // else if (!flag_058 && !type )
        // {
        //     //flag_Arrow_Back = false;
        //     window.clear();
        //     window.draw(user_shape);
        //     flag_Arrow1 = false;
        //    // window.draw(ArrowIcon_shape);
        //     window.draw(Arrow2Icon_shape);
        //     window.draw(p058);
        // }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (AllamehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_000 = false;
                    window2.close();
                }
            }
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {

                if (AghdasiyehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_001 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (AzadeghanIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_002 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (BimehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_003 = false;
                    window2.close();
                }
            }
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (BoostanIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_004 = false;
                    window2.close();
                }
            }
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (chaharIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_005 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (DowlatIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_006 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ShemiranIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_007 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (SinaIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_008 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (HosseinIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_009 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (SabzIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_010 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (FerdowsiIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_011 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (GhaemIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_012 = false;
                    window2.close();
                }
            }
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (GheytariyehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_013 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (GolhakIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_014 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (HarmIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_015 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (haftIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_016 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (javadiyehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_017 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (KashaniIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_018 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (KahrizakIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_019 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (KhajehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_020 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (JonoubIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_021 = false;
                    window2.close();
                }
            }
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (KouhsarIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_022 = false;
                    window2.close();
                }
            }
        }

        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (MahdiyehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_023 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (AzadiIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_024 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (EnghelabIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_025 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ValiAsarIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_026 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (JahadIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_027 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ShohadaIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_028 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (MirdamadIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_029 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ShiraziIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_030 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (MoniriyehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_031 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (NabardIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_032 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (NiroIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_033 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (OstadIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_034 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (PanzdahIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_035 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (PayanehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_036 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (piroziIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_037 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (RahahanIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_038 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ShademanIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_039 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (GhodosiIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_040 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (BeheshtiIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_041 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (HaghaniIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_042 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (KolahdozIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_043 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (MofattehIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_044 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (RezaeiIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_045 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (SadrIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_046 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ZeynoddinIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_047 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ShariatiIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_048 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ReyIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_049 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ShoushIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_050 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (sohrevardiIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_051 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (TajrishIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_052 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (TaleghaniIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_053 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (TeaterIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_054 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ParsIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_055 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (TowhidIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_056 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (YadegarIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_057 = false;
                    window2.close();
                }
            }
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Left)
            {
                if (ZamzamIcon_shape.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
                {
                    flag_058 = false;
                    window2.close();
                }
            }
        }

        window2.display();
    }
}

// void App::window3()
// {
//     sf::RenderWindow window3(sf::VideoMode(x_SIZE, y_SIZE), "Window 3");
//     sf ::Event event;
//     sf::Vector2f mouse = window3.mapPixelToCoords(sf::Mouse::getPosition(window3));
//     while (window3.pollEvent(event))
//     {
//         if (event.type == sf::Event::EventType::Closed)
//         {
//             window3.close();
//         }
//     }
//     // sf::Texture texture3;

//     sf::Texture texture3;
//     texture3.loadFromFile("picture/04.png");
//     sf::RectangleShape texture3_shape(sf::Vector2f(x_SIZE, y_SIZE));
//     // texture3.loadFromFile("picture/user.png");

//     // texture3_shape.setTexture(&texture3);

//     texture3_shape.setTexture(&texture3);
//     while (window3.isOpen())
//     {
//         sf::Event event;
//         while (window3.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window3.close();
//         }

//         if (!flag_000)
//         {
//             window3.clear();
//             window3.draw(texture3_shape);
//         }
//     }

//     window3.display();
// }

void App::window3()
{
    sf::RenderWindow window3(sf::VideoMode(x_SIZE, y_SIZE), "Window 3");

    sf ::Event event;
    sf::Vector2f mouse = window3.mapPixelToCoords(sf::Mouse::getPosition(window3));
    while (window3.pollEvent(event))
    {
        if (event.type == sf::Event::EventType::Closed)
        {
            window3.close();
        }
    }
    // sf::RectangleShape page2(sf::Vector2f(800, 600));
    //  page2.setFillColor(sf::Color::Green);
    sf::Texture user;
    user.loadFromFile("picture/6.png");
    sf::RectangleShape user_shape(sf::Vector2f(x_SIZE, y_SIZE));
    user_shape.setTexture(&user);

    sf::Font font;
    sf::Text p000;
    sf::Text p001;
    sf::Text p002;
    sf::Text p003;
    sf::Text p004;
    sf::Text p005;
    sf::Text p006;
    sf::Text p007;
    sf::Text p008;
    sf::Text p009;
    sf::Text p010;
    sf::Text p011;
    sf::Text p012;
    sf::Text p013;
    sf::Text p014;
    sf::Text p015;
    sf::Text p016;
    sf::Text p017;
    sf::Text p018;
    sf::Text p019;
    sf::Text p020;
    sf::Text p021;
    sf::Text p022;
    sf::Text p023;
    sf::Text p024;
    sf::Text p025;
    sf::Text p026;
    sf::Text p027;
    sf::Text p028;
    sf::Text p029;
    sf::Text p030;
    sf::Text p031;
    sf::Text p032;
    sf::Text p033;
    sf::Text p034;
    sf::Text p035;
    sf::Text p036;
    sf::Text p037;
    sf::Text p038;
    sf::Text p039;
    sf::Text p040;
    sf::Text p041;
    sf::Text p042;
    sf::Text p043;
    sf::Text p044;
    sf::Text p045;
    sf::Text p046;
    sf::Text p047;
    sf::Text p048;
    sf::Text p049;
    sf::Text p050;
    sf::Text p051;
    sf::Text p052;
    sf::Text p053;
    sf::Text p054;
    sf::Text p055;
    sf::Text p056;
    sf::Text p057;
    sf::Text p058;
    if (!font.loadFromFile("arial.ttf"))
    {
        throw runtime_error("Error: Unable to load font.");
    }
    p000.setFont(font);
    p001.setFont(font);
    p002.setFont(font);
    p003.setFont(font);
    p004.setFont(font);
    p005.setFont(font);
    p006.setFont(font);
    p007.setFont(font);
    p008.setFont(font);
    p009.setFont(font);
    p010.setFont(font);
    p011.setFont(font);
    p012.setFont(font);
    p013.setFont(font);
    p014.setFont(font);
    p015.setFont(font);
    p016.setFont(font);
    p017.setFont(font);
    p018.setFont(font);
    p019.setFont(font);
    p020.setFont(font);
    p021.setFont(font);
    p022.setFont(font);
    p023.setFont(font);
    p024.setFont(font);
    p025.setFont(font);
    p026.setFont(font);
    p027.setFont(font);
    p028.setFont(font);
    p029.setFont(font);
    p030.setFont(font);
    p031.setFont(font);
    p032.setFont(font);
    p033.setFont(font);
    p034.setFont(font);
    p035.setFont(font);
    p036.setFont(font);
    p037.setFont(font);
    p038.setFont(font);
    p039.setFont(font);
    p040.setFont(font);
    p041.setFont(font);
    p042.setFont(font);
    p043.setFont(font);
    p044.setFont(font);
    p045.setFont(font);
    p046.setFont(font);
    p047.setFont(font);
    p048.setFont(font);
    p050.setFont(font);
    p051.setFont(font);
    p052.setFont(font);
    p053.setFont(font);
    p054.setFont(font);
    p055.setFont(font);
    p056.setFont(font);
    p057.setFont(font);
    p058.setFont(font);
    p000.setCharacterSize(16);
    p001.setCharacterSize(16);
    p002.setCharacterSize(16);
    p003.setCharacterSize(16);
    p004.setCharacterSize(16);
    p005.setCharacterSize(16);
    p006.setCharacterSize(16);
    p007.setCharacterSize(16);
    p008.setCharacterSize(16);
    p009.setCharacterSize(16);
    p010.setCharacterSize(16);
    p011.setCharacterSize(16);
    p012.setCharacterSize(16);
    p013.setCharacterSize(16);
    p014.setCharacterSize(16);
    p015.setCharacterSize(16);
    p016.setCharacterSize(16);
    p017.setCharacterSize(16);
    p018.setCharacterSize(16);
    p019.setCharacterSize(16);
    p020.setCharacterSize(16);
    p021.setCharacterSize(16);
    p022.setCharacterSize(16);
    p023.setCharacterSize(16);
    p024.setCharacterSize(16);
    p025.setCharacterSize(16);
    p026.setCharacterSize(16);
    p027.setCharacterSize(16);
    p028.setCharacterSize(16);
    p029.setCharacterSize(16);
    p030.setCharacterSize(16);
    p031.setCharacterSize(16);
    p032.setCharacterSize(16);
    p033.setCharacterSize(16);
    p034.setCharacterSize(16);
    p035.setCharacterSize(16);
    p036.setCharacterSize(16);
    p037.setCharacterSize(16);
    p038.setCharacterSize(16);
    p039.setCharacterSize(16);
    p040.setCharacterSize(16);
    p041.setCharacterSize(16);
    p042.setCharacterSize(16);
    p043.setCharacterSize(16);
    p044.setCharacterSize(16);
    p045.setCharacterSize(16);
    p046.setCharacterSize(16);
    p047.setCharacterSize(16);
    p048.setCharacterSize(16);
    p049.setCharacterSize(16);
    p050.setCharacterSize(16);
    p051.setCharacterSize(16);
    p052.setCharacterSize(16);
    p053.setCharacterSize(16);
    p054.setCharacterSize(16);
    p056.setCharacterSize(16);
    p057.setCharacterSize(16);
    p058.setCharacterSize(16);

    p000.setFillColor(sf::Color::Black);
    p001.setFillColor(sf::Color::Black);
    p002.setFillColor(sf::Color::Black);
    p003.setFillColor(sf::Color::Black);
    p004.setFillColor(sf::Color::Black);
    p005.setFillColor(sf::Color::Black);
    p006.setFillColor(sf::Color::Black);
    p007.setFillColor(sf::Color::Black);
    p008.setFillColor(sf::Color::Black);
    p009.setFillColor(sf::Color::Black);
    p010.setFillColor(sf::Color::Black);
    p011.setFillColor(sf::Color::Black);
    p012.setFillColor(sf::Color::Black);
    p013.setFillColor(sf::Color::Black);
    p014.setFillColor(sf::Color::Black);
    p015.setFillColor(sf::Color::Black);
    p016.setFillColor(sf::Color::Black);
    p017.setFillColor(sf::Color::Black);
    p018.setFillColor(sf::Color::Black);
    p019.setFillColor(sf::Color::Black);
    p020.setFillColor(sf::Color::Black);
    p021.setFillColor(sf::Color::Black);
    p022.setFillColor(sf::Color::Black);
    p023.setFillColor(sf::Color::Black);
    p024.setFillColor(sf::Color::Black);
    p025.setFillColor(sf::Color::Black);
    p026.setFillColor(sf::Color::Black);
    p027.setFillColor(sf::Color::Black);
    p028.setFillColor(sf::Color::Black);
    p029.setFillColor(sf::Color::Black);
    p030.setFillColor(sf::Color::Black);
    p031.setFillColor(sf::Color::Black);
    p032.setFillColor(sf::Color::Black);
    p033.setFillColor(sf::Color::Black);
    p034.setFillColor(sf::Color::Black);
    p035.setFillColor(sf::Color::Black);
    p036.setFillColor(sf::Color::Black);
    p037.setFillColor(sf::Color::Black);
    p038.setFillColor(sf::Color::Black);
    p039.setFillColor(sf::Color::Black);
    p040.setFillColor(sf::Color::Black);
    p041.setFillColor(sf::Color::Black);
    p042.setFillColor(sf::Color::Black);
    p043.setFillColor(sf::Color::Black);
    p044.setFillColor(sf::Color::Black);
    p045.setFillColor(sf::Color::Black);
    p046.setFillColor(sf::Color::Black);
    p047.setFillColor(sf::Color::Black);
    p048.setFillColor(sf::Color::Black);
    p049.setFillColor(sf::Color::Black);
    p050.setFillColor(sf::Color::Black);
    p051.setFillColor(sf::Color::Black);
    p052.setFillColor(sf::Color::Black);
    p053.setFillColor(sf::Color::Black);
    p054.setFillColor(sf::Color::Black);
    p055.setFillColor(sf::Color::Black);
    p056.setFillColor(sf::Color::Black);
    p057.setFillColor(sf::Color::Black);
    p058.setFillColor(sf::Color::Black);

    p000.setPosition(66, 245);
    p001.setPosition(66, 245);
    p002.setPosition(66, 245);
    p003.setPosition(66, 245);
    p004.setPosition(66, 245);
    p005.setPosition(66, 245);
    p006.setPosition(66, 245);
    p007.setPosition(66, 245);
    p008.setPosition(66, 245);
    p009.setPosition(66, 245);
    p010.setPosition(66, 245);
    p011.setPosition(66, 245);
    p012.setPosition(66, 245);
    p013.setPosition(66, 245);
    p014.setPosition(66, 245);
    p015.setPosition(66, 245);
    p016.setPosition(66, 245);
    p017.setPosition(66, 245);
    p018.setPosition(66, 245);
    p019.setPosition(66, 245);
    p020.setPosition(66, 245);
    p021.setPosition(66, 245);
    p022.setPosition(66, 245);
    p023.setPosition(66, 245);
    p024.setPosition(66, 245);
    p025.setPosition(66, 245);
    p026.setPosition(66, 245);
    p027.setPosition(66, 245);
    p028.setPosition(66, 245);
    p029.setPosition(66, 245);
    p030.setPosition(66, 245);
    p031.setPosition(66, 245);
    p032.setPosition(66, 245);
    p033.setPosition(66, 245);
    p034.setPosition(66, 245);
    p035.setPosition(66, 245);
    p036.setPosition(66, 245);
    p037.setPosition(66, 245);
    p038.setPosition(66, 245);
    p039.setPosition(66, 245);
    p040.setPosition(66, 245);
    p041.setPosition(66, 245);
    p042.setPosition(66, 245);
    p043.setPosition(66, 245);
    p044.setPosition(66, 245);
    p045.setPosition(66, 245);
    p046.setPosition(66, 245);
    p047.setPosition(66, 245);
    p048.setPosition(66, 245);
    p049.setPosition(66, 245);
    p050.setPosition(66, 245);
    p051.setPosition(66, 245);
    p052.setPosition(66, 245);
    p053.setPosition(66, 245);
    p054.setPosition(66, 245);
    p055.setPosition(66, 245);
    p056.setPosition(66, 245);
    p057.setPosition(66, 245);
    p058.setPosition(66, 245);

    p000.setString("Allameh Jafari");
    p001.setString("Aghdasiyeh");
    p002.setString("Azadeghan");
    p003.setString("Bimeh");
    p004.setString("Boostan-e laleh");
    p005.setString("Chaharbagh");
    p006.setString("Darvazeh Dowlat");
    p007.setString("Darvazeh Shemiran");
    p008.setString("Ebn-e Sina");
    p009.setString("Emam Hossein");
    p010.setString("EramSabz");
    p011.setString("Ferdowsi");
    p012.setString("Gha'em");
    p013.setString("Gheytariyeh");
    p014.setString("Gholhak");
    p015.setString("Haram-e Hazrat Abdolazim");
    p016.setString("Haftom-e Tir");
    p017.setString("Javadiyeh");
    p018.setString("Kashani");
    p019.setString("Kahrizak");
    p020.setString("Khajeh Abdollah-e Ansari");
    p021.setString("Jonoub Terminal");
    p022.setString("Kouhsar");
    p023.setString("Mahdiyeh");
    p024.setString("Meydan Azadi");
    p025.setString("Meydan-e Enghlab Eslami");
    p026.setString("Meydan-e Hazrat-e ValiAsr");
    p027.setString("Meydan-e Jahad");
    p028.setString("Meydan-e Shohada");
    p029.setString("Mirdamad");
    p030.setString("Mirza-ye Shirazi");
    p031.setString("Moniriyeh");
    p032.setString("Nabard");
    p033.setString("Niro Havaei");
    p034.setString("Ostad Mo'in");
    p035.setString("Panzdah-e Khordad");
    p036.setString("Payaneh Javanmard");
    p037.setString("Pirozi");
    p038.setString("Rahahan");
    p039.setString("Shademan");
    p040.setString("Shahid Ghodousi");
    p041.setString("Shahid Beheshti");
    p042.setString("Shahid Haghani");
    p043.setString("Shahid Kolahdoz");
    p044.setString("Shahid Mofatteh");
    p045.setString("Shahid Rezaei");
    p046.setString("Shahid Sadr");
    p047.setString("Shahid Zeynoddin");
    p048.setString("Shahrak-e Shari'ati");
    p049.setString("Shahr-e Rey");
    p050.setString("Shoush");
    p051.setString("sohrevardi");
    p052.setString("Tajrish");
    p053.setString("Taleghani");
    p054.setString("Teatr-e Shahr");
    p055.setString("Tehran Pars");
    p056.setString("Towhid");
    p057.setString("Yadegar-e Emam");
    p058.setString("Zamzam");

    while (window3.isOpen())
    {
        sf::Event event;
        while (window3.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window3.close();
        }
        if (!flag_000)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p000);
        }
        else if (!flag_001)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p001);
        }
        else if (!flag_002)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p002);
        }
        else if (!flag_003)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p003);
        }
        else if (!flag_004)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p004);
        }
        else if (!flag_005)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p005);
        }
        else if (!flag_006)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p006);
        }
        else if (!flag_007)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p007);
        }
        else if (!flag_008)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p008);
        }
        else if (!flag_009)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p009);
        }
        else if (!flag_010)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p010);
        }
        else if (!flag_011)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p011);
        }
        else if (!flag_012)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p012);
        }
        else if (!flag_013)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p013);
        }
        else if (!flag_014)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p014);
        }
        else if (!flag_015)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p015);
        }
        else if (!flag_016)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p016);
        }
        else if (!flag_017)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p017);
        }
        else if (!flag_018)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p018);
        }
        else if (!flag_019)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p019);
        }
        else if (!flag_020)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p020);
        }
        else if (!flag_021)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p021);
        }
        else if (!flag_022)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p022);
        }
        else if (!flag_023)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p023);
        }
        else if (!flag_024)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p024);
        }
        else if (!flag_025)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p025);
        }
        else if (!flag_026)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p026);
        }
        else if (!flag_027)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p027);
        }
        else if (!flag_028)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p028);
        }
        else if (!flag_029)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p029);
        }
        else if (!flag_030)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p030);
        }
        else if (!flag_031)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p031);
        }
        else if (!flag_032)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p032);
        }
        else if (!flag_033)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p033);
        }
        else if (!flag_034)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p034);
        }
        else if (!flag_035)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p035);
        }
        else if (!flag_036)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p036);
        }
        else if (!flag_037)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p037);
        }
        else if (!flag_038)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p038);
        }
        else if (!flag_039)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p039);
        }
        else if (!flag_040)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p040);
        }
        else if (!flag_041)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p041);
        }
        else if (!flag_042)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p042);
        }
        else if (!flag_043)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p043);
        }
        else if (!flag_044)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p044);
        }
        else if (!flag_045)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p045);
        }
        else if (!flag_046)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p046);
        }
        else if (!flag_047)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p047);
        }
        else if (!flag_048)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p048);
        }
        else if (!flag_049)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p049);
        }
        else if (!flag_050)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p050);
        }
        else if (!flag_051)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p051);
        }
        else if (!flag_052)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p052);
        }
        else if (!flag_053)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p053);
        }
        else if (!flag_054)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p054);
        }
        else if (!flag_055)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p055);
        }
        else if (!flag_056)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p056);
        }
        else if (!flag_057)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p057);
        }
        else if (!flag_058)
        {
            window3.clear();
            window3.draw(user_shape);
            window3.draw(p058);
        }
        window3.display();
    }
}