# **Задачи - Символни низове част втора**

1. Напишете програма dictionary, която по предварително известен речник<br>
от думи и въведено изречение от потребителя казва колко от въведените<br>
думи се съдържат в речника.<br>

    Пример:
    ```
    const char* dictionary[] = {“cats”, “dogs”};
    Вход: it’s raining cats and dogs
    Изход: 2
    ```

1. Реализирайте програмата “речта на Йода”, която по въведено изречение<br>
в прав текст, отпечатва на екрана примерен вариант за това как Йода<br>
би изрекал това изречение. (Йода (герой от StarWars) говори с разместен словоред).<br>
Опитайте се да не заделяте повече памет от необходимата за всяка<br>
една от въведените думи от изречението. От програмата Ви се очаква<br>
при две различни пускания с еднакво изречение за вход, да отпечатва<br>
различен изход.

    Пример:
    ```
    Вход: "Young student the Force is strong with you!"
    Изход: "the Young strong student is you! with Force"
    ```

1. Напишете програмата crossword, която кара потребителя да въведе<br>
цяло положително число N <= 16, след това на N-1 последователни<br>
реда от думи с дължина точно N-1 (разчитаме на верен вход).<br>
След това програмата трябва да изведе броя на думите, които се срещат<br>
и в редовете, и в колоните.<br>

    Примери:
    ```
    Вход:   4
            abc
            bca
            cba

    Изход: 1 (abc се среща в първия ред и в първата колона)
    ```

    ```
    Вход:   4
            abc
            bcb
            cbi

    Изход: 3
    (abc се среща в първия ред и в първата колона,
    bcb във втория ред и втората колона, cbi в третия ред с третата колона)
    ```

1. Разгледайте редицата: 1, 11, 21, 1211, 111221, 312211, 13112221, 1113213211<br>
Намерете зависимостта между членовете. Имплементирайте функция, която генерира<br>
n-тия член на редицата и то с точно заделена памет.<br>

1. Напишете функция, която по шаблон и низ казва дали низа отговаря на шаблона.<br>
В шаблона могат да участват всички ASCII символи,<br>
а пък следните два имат специално предназначение:
 - '\?' - е символ "жокер", той може да се замести с кой да е друг символ.
 - '\*' - последователност от произволни символи от нула до неограничен брой.<br>

    Пример:
    ```
    Вход:   pattern - "te?t.*"
            string - "test.txt" (още примери: "text.pdf", "tekt.sad", "teqt.qwerty")
    ```


1. Ще разработим приложение за управление на пароли (по поръчка от FMIValut, разбира се).<br>
Вашата програма трябва да поддържа 3 различни режима на работа (в кой режим да работи приложението
се определя от аргумент на командния ред). Режимите са както следва:

- `pass-check` - програмата ви трябва да прочете от стандартния си вход един символен низ - <br>
парола. След това програмата съветва потребителя какво още е нужно,<br>
за да стане тази парола "сигурна". Като правилата за "сигурна" парола са:
    - съдържа поне 12 символа<br>
    - съдържа поне 1 буква и поне 1 цифра<br>
    - съдържа както малки, така и главни букви<br>
    - съдържа поне един символ (!, ?, #, @,...)<br>

Изведете подходящи съобщения, които да съветват потребиреля,<br>
какво не достига на паролата му за да бъде окачествена като сигурна.<br>

    Пример:
    ```
    Команден ред: $pass_app pass-check
    Вход: "11IztochihmeBANKOVATASmetkaNaYosif!11
    Изход: Your password is strong!
    ```
- `pass-encrypt <plain_text_pass>` - програмата прочита от стандартния си вход едно цяло число,<br>
след това толкова на брой байтове - тази информация служи за "криптираща таблица".<br>
Използвайки таблицата и побитова операция "изключващо или", програмата криптира низът<br>
`<plain_text_pass>`. След това шифрованият стринг се извежда на екрана.<br>

- `pass-decrypt <cipher_text_pass>` - отново се изчита таблицата от стандартния вход, след това<br>
низът `<cipher_text_pass>` се декриптира и изкарва на стандартния изход.<br>

*Съвет: пренасочете стандартния вход да бъде от файла **one_time_pad.txt**.*<br>

*Бонус: поддържайте аргументи на командия ред ([-h] и [help]) - извикана с тях,*<br>
*програмата ви, да извежда помощно съобщение - как се очаква да бъде използвана.*<br>