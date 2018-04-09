using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class JSONParser {

	static public StageData LoadResources()
	{
		TextAsset file = Resources.Load("stages") as TextAsset;
		string content = file.ToString ();

		return JsonUtility.FromJson<StageData>(content);
	}

	static public void SaveResources(StageData stageData) {
		var jsonData = JsonUtility.ToJson (stageData);
		File.WriteAllText (Application.dataPath + "/Resources/stages.json", jsonData.ToString ());
	}
}
