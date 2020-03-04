# UE_Medical_Floor
Агентное поведенческое моделирование этажа центра Алмазова.

## Необходимое ПО
* Unreal Engine версия от 4.22
* Visual Studio 2019

## Настройка проекта
1. Правой кнопкой мыши нажать на **FCTest.uproject**, затем выбрать **Generate Visual Studio project files**
2. Открыть сгенерированный файл проекта **FCTest.sln**
3. Запустить проект из открытого файла в Visual Studio и ждать компиляции.

Если возникнет ошибка связанная с enum перейти к пункту 4
4. Добавить в файл **FusionCrowd/Source/FusionCrowd/Public/OperationComponentType.h** строчку ```OPT_Null = 0``` после

```
UENUM(BlueprintType)
enum EOperationComponentType
{
```

## Описание
Основные элементы агентного моделирования расположены в папке ***Content/Blueprints/SceneElements***
## A_AgentSpawner
![Image alt](https://github.com/sawyre/UE_Medical_Floor/raw/master/WikiImages/AgentSpawnerBlueprint.png)
### Переменные:
* Agent To Spawn – количество создаваемых агентов;
* SpawnDelay – задержка между созданием агентов;
* OperationComponent – отвечает за локальное движение агентов;
* ProbabiliesOfGoal – список целей с вероятностями их выбора (если isReal не равно True, то данная переменная не имеет смысла);
* isReal – если true, то будут создаваться агенты, чье движение будет восстанавливаться, если false, то будут создаваться виртуальные * * агенты, с помощью которых будет восстанавливаться движение реальных;
### Функции:
* SpawnAgent – отвечает за создание агента;
* SelectWayPointLocation – последовательный выбор целей для каждого агента;
* SelectRandomWayPointLocation – случайный выбор целей для каждого агента;
## A_FCAgentBlueprint 
![Image alt](https://github.com/sawyre/UE_Medical_Floor/raw/master/WikiImages/FCAgentBlueprint.png)
### Переменные:
* WayPoints – массив целей;
* isDetected – отвечает за то, что агент находится в области действия сенсоров;
* SensorSequence – хранит последовательность, в которой агент заходил в область действия сенсоров и выходил из нее;
* Coordinates – хранит путь пройденный агентом;
* goalIsReached – отвечает за достижение агентом текущей цели (true – значит агент достиг цели);
### Функции:
* SetIsDetected – setter для isDetected;
* getCoordinates – сохраняет текущий сенсор, который был пересечен агентом в последовательность;
* addCoords – пока не используется;
* CheckSensorSequence – сравнение последовательности сенсоров виртульного агента с рельным;
## SensorBlueprint
![Image alt](https://github.com/sawyre/UE_Medical_Floor/raw/master/WikiImages/SensorBlueprint.png)
Вызывет методы агента для внесения пересечений с сенсором в массив на входе и выходе агента из области действия сенсора.
