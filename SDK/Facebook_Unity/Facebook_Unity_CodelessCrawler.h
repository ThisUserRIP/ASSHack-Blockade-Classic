#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_UIModule\UnityEngine_RenderMode.h"

namespace Facebook_Unity::Facebook::Unity
{
	struct CodelessCrawler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool isGeneratingSnapshot;
			UnityEngine_CoreModule::UnityEngine::Camera* mainCamera;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void CaptureViewHierarchy(mscorlib::System::String* message);
		mscorlib::System::Collections::IEnumerator* GenSnapshot();
		static void SendAndroid(mscorlib::System::String* json);
		static void SendIos(mscorlib::System::String* json);
		static mscorlib::System::String* GenBase64Screenshot();
		static mscorlib::System::String* GenViewJson();
		static void GenChild(UnityEngine_CoreModule::UnityEngine::GameObject* curObj, mscorlib::System::Text::StringBuilder* builder);
		void onActiveSceneChanged(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene arg0, UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene arg1);
		static void updateMainCamera();
		static UnityEngine_CoreModule::UnityEngine::Vector2 getScreenCoordinate(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_UIModule::UnityEngine::RenderMode renderMode);
		static mscorlib::System::String* getClasstypeBitmaskButton();
		static mscorlib::System::String* getVisibility(UnityEngine_CoreModule::UnityEngine::GameObject* gameObj);
		void _ctor();
		static void _cctor();
	};
}

