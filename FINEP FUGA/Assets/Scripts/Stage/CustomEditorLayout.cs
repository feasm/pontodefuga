using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(EditorManager))]
public class CustomEditorLayout : Editor {

	public override void OnInspectorGUI()
	{
		DrawDefaultInspector();

		EditorManager myScript = (EditorManager)target;
		if(GUILayout.Button("Build Stage"))
		{
			myScript.BuildStage();
		}
	}
}
