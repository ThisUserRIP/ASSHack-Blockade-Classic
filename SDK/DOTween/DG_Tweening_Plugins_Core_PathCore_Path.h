#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct CatmullRomDecoder; };
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct LinearDecoder; };
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct CubicBezierDecoder; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "DG_Tweening_PathType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "DG_Tweening_Plugins_Core_PathCore_ControlPoint.h"
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct ControlPoint; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct ABSPathDecoder; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "DG_Tweening_AxisConstraint.h"

namespace DOTween::DG::Tweening::Plugins::Core::PathCore
{
	struct Path : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<float>* wpLengths;
		DOTween::DG::Tweening::PathType type;
		int32_t subdivisionsXSegment;
		int32_t subdivisions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* wps;
		IL2CPP::Array<DOTween::DG::Tweening::Plugins::Core::PathCore::ControlPoint>* controlPoints;
		float length;
		bool isFinalized;
		IL2CPP::Array<float>* timesTable;
		IL2CPP::Array<float>* lengthsTable;
		int32_t linearWPIndex;
		bool addedExtraStartWp;
		bool addedExtraEndWp;
		DOTween::DG::Tweening::Plugins::Core::PathCore::Path* _incrementalClone;
		int32_t _incrementalIndex;
		DOTween::DG::Tweening::Plugins::Core::PathCore::ABSPathDecoder* _decoder;
		bool _changed;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* nonLinearDrawWps;
		UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition;
		mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Vector3> lookAtPosition;
		UnityEngine_CoreModule::UnityEngine::Color gizmoColor;
		struct StaticFields
		{
			DOTween::DG::Tweening::Plugins::Core::PathCore::CatmullRomDecoder* _catmullRomDecoder;
			DOTween::DG::Tweening::Plugins::Core::PathCore::LinearDecoder* _linearDecoder;
			DOTween::DG::Tweening::Plugins::Core::PathCore::CubicBezierDecoder* _cubicBezierDecoder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(DOTween::DG::Tweening::PathType type, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* waypoints, int32_t subdivisionsXSegment, mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Color> gizmoColor);
		void _ctor();
		void FinalizePath(bool isClosedPath, DOTween::DG::Tweening::AxisConstraint lockPositionAxes, UnityEngine_CoreModule::UnityEngine::Vector3 currTargetVal);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPoint(float perc, bool convertToConstantPerc);
		float ConvertToConstantPathPerc(float perc);
		int32_t GetWaypointIndexFromPerc(float perc, bool isMovingForward);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* GetDrawPoints(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p, int32_t drawSubdivisionsXSegment);
		static void RefreshNonLinearDrawWps(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p);
		void Destroy();
		DOTween::DG::Tweening::Plugins::Core::PathCore::Path* CloneIncremental(int32_t loopIncrement);
		void AssignWaypoints(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* newWps, bool cloneWps);
		void AssignDecoder(DOTween::DG::Tweening::PathType pathType);
		void Draw();
		static void Draw(DOTween::DG::Tweening::Plugins::Core::PathCore::Path* p);
	};
}

