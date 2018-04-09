using System;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Element
{
	public Vector3 position;
	public Vector3 rotation;
	public Vector3 scale;
}

[System.Serializable]
public class Point
{
	public Element pf;
	public Element line1;
	public Element line2;
}

[System.Serializable]
public class Stage
{
	public string name;
	public Vector3 horizonLineHit;
	public List<Point> pfs;
}

[System.Serializable]
public class StageData
{
	public List<Stage> stages;
}
