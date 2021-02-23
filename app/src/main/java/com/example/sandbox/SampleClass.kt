package com.example.sandbox

class SampleClass {

    companion object {
        @JvmStatic
        fun main(vararg args: String): Unit {
            /*
            val myString = createString {
                append("Text")
                appendLn("TextLn")
            }
            print(myString)
            */
        }
    }
}

class MyStringBuilder {
    val result = StringBuilder()

    fun append(text: String) {
        result.append(text)
    }

    fun appendLn(text: String) {
        result.append("\n$text")
    }
}

fun <T> T.createString(builder: MyStringBuilder.() -> Unit): String {

    val myBuilder = MyStringBuilder()
    myBuilder.builder()

    return myBuilder.result.toString()
}
