package com.example.sandbox

import android.app.Activity
import android.app.AlertDialog
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Process
import android.util.Log
import android.widget.Toast
import androidx.core.os.bundleOf

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        // test 1
        val hasReadContactPermission =
            (this as Context).checkPermission(android.Manifest.permission.READ_CONTACTS)
        println(hasReadContactPermission)
        Log.d("asikn", hasReadContactPermission.toString())

        // test 2
        val intent = intentFor<MainActivity>("EXTRA1" to "value1", "EXTRA2" to "value2")
        Log.d("asikn", intent.extras.toString())

        // test 3
        showDialog {
            setTitle("Salem")
            setMessage("Ne Habar? Tynyshtykpa?")
            positiveButton("Yes") {
                showCustomToast("Yeeeeees :)")
            }

            negativeButton {
                showCustomToast("Cancel :(")
            }
        }
    }

    fun Context.checkPermission(permission: String): Boolean =
        checkPermission(
            permission,
            Process.myPid(),
            Process.myUid()
        ) == PackageManager.PERMISSION_GRANTED

    inline fun <reified T : Activity> Context.intentFor(vararg extras: Pair<String, Any?>) =
        Intent(this, T::class.java).apply { putExtras(bundleOf(*extras)) }

    fun showDialog(dialogBuilder: AlertDialog.Builder.() -> Unit) {
        val builder = AlertDialog.Builder(this)
        builder.dialogBuilder()
        val dialog = builder.create()

        dialog.show()
    }

    fun AlertDialog.Builder.positiveButton(
        text: String = "Okay",
        handleClick: (which: Int) -> Unit = {}
    ) {
        this.setPositiveButton(text, { dialogInterface, which -> handleClick(which) })
    }

    fun AlertDialog.Builder.negativeButton(
        text: String = "Cancel",
        handleClick: (which: Int) -> Unit = {}
    ) {
        this.setNegativeButton(text, { dialogInterface, which -> handleClick(which) })
    }

    fun showCustomToast(msg: String, toastDuration: Int = Toast.LENGTH_SHORT) {
        Toast.makeText(this, msg, toastDuration).show()
    }
}
