package com.example.sandbox

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel

class MainActivityViewModel : ViewModel() {

    val liveData = MutableLiveData<String>()

    override fun onCleared() {
        super.onCleared()
        liveData.postValue("")
    }
}