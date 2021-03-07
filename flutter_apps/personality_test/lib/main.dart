import 'package:flutter/material.dart';
import './quiz.dart';
import './result.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    // TODO: implement createState
    return _MyAppState();
  }
}

class _MyAppState extends State<MyApp> {
  final _questions = const [
    {
      "question text": "What is your favorite color?",
      "answers": [
        {"text": "Black", "score": 10},
        {"text": "Red", "score": 5},
        {"text": "Green", "score": 15},
        {"text": "White", "score": 20},
      ],
    },
    {
      "question text": "What is your favorite animal?",
      "answers": [
        {"text": "Dog", "score": 10},
        {"text": "Cat", "score": 5},
        {"text": "Horse", "score": 15},
        {"text": "Fish", "score": 20},
      ],
    },
    {
      "question text": "What is your favorite food?",
      "answers": [
        {"text": "Steak", "score": 10},
        {"text": "Fish", "score": 5},
        {"text": "Chicken", "score": 15},
        {"text": "Steak", "score": 20},
      ],
    },
  ];
  var _questionIndex = 0;
  var _totalScore = 0;
  void _resetQuiz() {
    setState(() {
      _questionIndex = 0;
      _totalScore = 0;
    });
  }

  void _answerQuestion(int score) {
    _totalScore += score;
    setState(() {
      _questionIndex = _questionIndex + 1;
    });
    print(_questionIndex);
    if (_questionIndex < _questions.length) {
      print("We have more questions!");
    } else {
      print("No more questions");
    }
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text("Personality Tester"),
        ),
        body: _questionIndex < _questions.length
            ? Quiz(
                answerQuestion: _answerQuestion,
                questionIndex: _questionIndex,
                questions: _questions,
              )
            : Result(_totalScore, _resetQuiz),
      ),
    );
  }
}
