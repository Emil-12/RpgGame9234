#include "World.h"
#include "Hero.h"
#include "Game.h"
Game game;
void World::location1()
{
	std::cout << "Добро пожаловать в игру 'Владыки хаоса'\nв процессе прохождения сохранений нет вам нужно проходить игру за один игровой сеанс" << std::endl;
	std::cout << "Чтобы начать\nнажмите - 1\nили\n2 - чтобы выйти в меню" << std::endl;

	char choice[2] = "";
	std::cin >> choice;
	if (strcmp(choice, "1") == 0)
	{
		std::cout << "Вы родились в семье бедного фермера, чему бы вы хотели обучится ?" << std::endl;
		std::cout << "1 - Говорить\nили\n2 - ходить" << std::endl;
		std::cin >> hero.choise1;
		if (strcmp(hero.choise1, "1") == 0)
		{
					std::cout << "Вы научились говорить и сказали первым плохое слово и получили от Отца хорошую оплеуху,\nно ваша мать успела защитить вас от последнего удара" << std::endl;
					std::cout << "Чему бы вы хотели обучится дальше:\n3 - бегать\nили\n4 - читать" << std::endl;
				}
				else if (strcmp(hero.choise1, "2") == 0)
				{
					std::cout << "Вы научились ходить, но обожглись пока ходили слишком близко к печке" << std::endl;
					std::cout << "Чему бы вы хотели обучится дальше:\n1 - бегать\nили\n2 - читать" << std::endl;
				}
				std::cin >> hero.choise1;
				if (strcmp(hero.choise1, "2") == 0)
				{
					std::cout << "Вы научились  читать (ваш интеллект увеличен)\nи вас пригласили в школу поэзии за вашу выразительность" << std::endl;
					hero.intelegence += 10;
					std::cout << " s - Хотите ли вы пойти в школу чтобы развить свои навыки?" << std::endl;

				}
				else if (strcmp(hero.choise1, "1") == 0)
				{
					std::cout << "Вы научились бегать" << std::endl;
					hero.health -= 100;
					std::cout << "Но заблудились в лесу и 3 дня не могли найти выход и погибли" << std::endl;
					Game game;
					game.menu();
				}
				std::cin >> hero.choise1;
				if (strcmp(hero.choise1, "s") == 0)
				{
					location2();
				}

			}
	if (strcmp(choice, "2") == 0)
	{
		game.menu();
	}
}


void World::location2()
{
	std::cout << "Вы отправляетесь в школу и увеличиваете свои навыки в течение 3 лет.\nВ один из дней вас замечает профессор и рекомендует своему знакомому" << std::endl;
	hero.intelegence += 15;
	std::cout << "Знакомым профессора оказался сам Король!!!\nКороль хочет видеть вас в качестве своего личного поэта " << std::endl;
	std::cout << "Хотите\n1 - быть поэтом\nили же\n2 - продолжить обучение и увеличить свои знания и навыки" << std::endl;
	std::cin >> hero.choise1;
	if (strcmp(hero.choise1, "1") == 0)
	{
		location3();
		
	}
	else if (strcmp(hero.choise1, "2") == 0)
	{
		std::cout << "Вы отвергаете предложения Короля быть поэтом, под предлогом, что вы не готовы к такой ответственной должности" << std::endl;
		std::cout << "Вам пришлось обучаться еще 3 года, но это того стоило" << std::endl;
		hero.intelegence += 14;
		std::cout << "Вы искали рабочее место в разных заведениях, но не смогли найти и вспомнили про предложения Короля" << std::endl;
		std::cout << "Оказывается его предложение все еще было в силе" << std::endl;
		location3();
	}
}

void World::location3()
{
	std::cout << "Вы становитесь поэтом и довольно хорошо справляетесь со своей должностью" << std::endl;
	std::cout << "В один из дней Король зовет вас, чтобы вы сочинили стих в его честь" << std::endl;
	std::cout << "Что вы выберите:\n1 - сочинить сатиру\nили же\n2 - стих который восхваляет Короля и его свиту?" << std::endl;
	std::cin >> hero.choise1;
	if (strcmp(hero.choise1, "1") == 0)
	{
		std::cout << "Вы сочиняете сатиру и высмеивайте в ней Короля,\nсвита не может удержать смеха, а Король, недовольный этим, зовет вас в свои покои" << std::endl;
		std::cout << "Вы послушно идете за Королем и, проходя мимо стражи, он делает жест,\nи стража убивает вас на месте" << std::endl;
		std::cout << "GAME OVER" << std::endl;
		game.menu();
	}
	else if (strcmp(hero.choise1, "2") == 0)
	{
		std::cout << "Вы сочиняете стих и Королю он очень нравится" << std::endl;
		std::cout << "Вам опладируют все, кроме одного знатного горожанина, который смотрел на вас презрительно" << std::endl;
		std::cout << "Что вы выберите:\n1 - поговорить с этим горожанином\nили\n2 - вернутся в свои покои" << std::endl;
	}
	std::cin >> hero.choise1;
	if (strcmp(hero.choise1, "1") == 0)
	{
		std::cout << "После выступления вы ищете того человека\nи находите его среди толпы" << std::endl;
		std::cout << "З.Г.: эй что ты делаешь, я из знатной семьи не смей до меня дотрагиватся!!!" << std::endl;
		std::cout << "Вы: да ладно, я просто хотел поговорить" << std::endl;
		std::cout << "З.Г.: и о чем же интересно?" << std::endl;
		std::cout << "Вы: вам не понравился мой стих?" << std::endl;
		std::cout << "З.Г.: да не понравился, вы восхваляйте тирана и его диктаторскую деятельность" << std::endl;
		std::cout << "Вы: о чем это вы?" << std::endl;
		std::cout << "З.Г.: в ближайшее время узнаете..." << std::endl;
		std::cout << "Вас толкают в сторону, и когда вы оборочиваетесь, того горожанина и след простыл" << std::endl;
		std::cout << "Нажмите 1 чтобы вернутся в свои покои" << std::endl;
	}
	std::cin >> hero.choise1;
	if (strcmp(hero.choise1, "1") == 0)
	{
		std::cout << "Вы возвращаетесь в свои покои" << std::endl;
		std::cout << "Вам удается очень быстро заснуть" << std::endl;
		location4();
	}
}

void World::location4()
{
	std::cout << "На следующий день, внезапно в вашу комнату заходит страж и говорит вам про обстрел замка со стороны народного ополчения" << std::endl;
	std::cout << "Стража дает вам пороховое ружье для самозащиты, а сам бежит к оборонительным башням" << std::endl;
	std::cout << "Вам случайно удалось увидеть то, что стража убивает мирных горожан, которые даже не замешаны в ополчении" << std::endl;
	std::cout << "Вы идете со всеми жильцами замка в подвал, но за поворотом вас хватает чья-то рука из открывающегося прохода и уносит за собой" << std::endl;
	std::cout << "Вы пытайтесь бесчетно вырваться, но у вас не выходит из-за мощной хватки незнакомца" << std::endl;
	std::cout << "Наконец вас притаскивают в светлое помещение и вы видите перед собой четыре незнакомые силуета" << std::endl;
	std::cout << "Варианты вопросов:\n1 - кто вы такие?\n2 - где я?" << std::endl;
	std::cin >> hero.choise1;
	if (strcmp(hero.choise1, "1") == 0)
	{
		std::cout << "Четыре силуета начинают непродолжительно смеятся, но останавливаются" << std::endl;
		std::cout << "Один из них, который был похож на Смерть с косой начал говорить:" << std::endl;
		std::cout << "Смерть: Мы, кого ты видишь перед собой, являемся сеятелями семен вражды, голода, болезней и смерти" << std::endl;
		std::cout << "Чума: никогда бы не подумал, что меня заинтересует сотрудничество с никчемной расой" << std::endl;
		std::cout << "Вариант вопросов:\n1 - и зачем же я вам нужнен раз никчемен?" << std::endl;
		
	}
	std::cin >> hero.choise1;
	if (strcmp(hero.choise1, "1") == 0)
	{
		std::cout << "Голод: Мы хотели бы заключить с тобой договор" << std::endl;
		std::cout << "Война: хотел бы ты присоединиться к нам?" << std::endl;
		std::cout << "Варианты ответов:\n1 - да, я бы хотел к вам присоединится\nили же\n2 - нет, это безумие" << std::endl;
	}
	std::cin >> hero.choise1;
	if (strcmp(hero.choise1, "1") == 0)
	{
		std::cout << "Вы присоединяетесь к Владыкам хаоса, вместе с ними вы сеете хаос и разрушения" << std::endl;
		std::cout << "Но вас опьяняет власть и вы ищите способы подчинить себе остальных владык" << std::endl;
		std::cout << "По мере поиска вы находите могущественный артефакт и благодаря ему подчиняете их" << std::endl;
		std::cout << "Вы прошли игру на плохую концовку\nНажмите m чтобы вернутся в меню" << std::endl;
		std::cin >> hero.choise;
		if (strcmp(hero.choise, "m") == 0)
		{
			game.menu();
		}
	}
	else if (strcmp(hero.choise1, "2") == 0)
	{
		if (hero.intelegence == 40)
{
	std::cout << "После вашего отказа Владыки приходят в ярость" << std::endl;
	std::cout << "Вы доблестно сражаетесь и погибайте смертью храбрых" << std::endl;
	std::cout << "Вы прошли игру на хорошую концовку\nНажмите m чтобы вернутся в меню" << std::endl;
	std::cin >> hero.choise;
	if (strcmp(hero.choise, "m") == 0)
	{
		game.menu();
	}
	
}
		else
{
	std::cout << "Вам не хватает интеллекта для этого ответа" << std::endl;
	location4();
}

	}
}
