import 'package:flutter/material.dart';

class Result extends StatelessWidget {
  final int resultScore;

  final Function resetHandler;

  Result(this.resultScore, this.resetHandler);

  String get resultPhrase {
    String resultText;
    if (resultScore <= 20) {
      resultText = "You are cool and relaxed";
    } else if (resultScore <= 35) {
      resultText = "You are energetic and zelaous";
    } else if (resultScore <= 50) {
      resultText = "You are reserved and opaque";
    } else {
      resultText = "You are observant and vigilant";
    }

    return resultText;
  }

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Column(
        children: <Widget>[
          Text(
            resultPhrase,
            style: TextStyle(fontSize: 36, fontWeight: FontWeight.bold),
            textAlign: TextAlign.center,
          ),
          FlatButton(
            child: Text(
              " Restart Quiz",
            ),
            textColor: Colors.blue,
            onPressed: resetHandler,
          ),
        ],
      ),
    );
  }
}
