#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Orientation { struct OrientationEvent; };
#include "Doozy_Engine_Orientation_DetectedOrientation.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Orientation
{
	struct OrientationDetector : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool DebugMode;
		Assembly_CSharp::Doozy::Engine::Orientation::OrientationEvent* OnOrientationEvent;
		Assembly_CSharp::Doozy::Engine::Orientation::DetectedOrientation m_currentOrientation;
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_rectTransform;
		UnityEngine_UIModule::UnityEngine::Canvas* m_canvas;
		int32_t m_deviceOrientationCheckCount;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Orientation::OrientationDetector* s_instance;
			bool _ApplicationIsQuitting_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::Orientation::OrientationDetector* get_Instance();
		static bool get_ApplicationIsQuitting();
		static void set_ApplicationIsQuitting(bool value);
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_RectTransform();
		UnityEngine_UIModule::UnityEngine::Canvas* get_Canvas();
		Assembly_CSharp::Doozy::Engine::Orientation::DetectedOrientation get_CurrentOrientation();
		bool get_DebugComponent();
		void Reset();
		void OnValidate();
		void Awake();
		void OnEnable();
		void Update();
		void OnRectTransformDimensionsChange();
		void OnApplicationQuit();
		void CheckDeviceOrientation(bool forceUpdate);
		void ChangeOrientation(Assembly_CSharp::Doozy::Engine::Orientation::DetectedOrientation newOrientation, bool forceUpdate);
		static Assembly_CSharp::Doozy::Engine::Orientation::OrientationDetector* AddToScene(bool selectGameObjectAfterCreation);
	};
}

