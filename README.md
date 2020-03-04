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
