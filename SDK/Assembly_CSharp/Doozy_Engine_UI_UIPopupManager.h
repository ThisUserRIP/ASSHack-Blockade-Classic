#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupQueueData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupDatabase; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopupManager : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::UIPopupManager* s_instance;
			Assembly_CSharp::Doozy::Engine::UI::UIPopup* CurrentVisibleQueuePopup;
			mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData>* PopupQueue;
			bool _ApplicationIsQuitting_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::UI::UIPopupManager* get_Instance();
		static Assembly_CSharp::Doozy::Engine::UI::UIPopupDatabase* get_PopupDatabase();
		static bool get_QueueIsEmpty();
		static bool get_ApplicationIsQuitting();
		static void set_ApplicationIsQuitting(bool value);
		bool get_DebugComponent();
		void Awake();
		void OnApplicationQuit();
		static void AddToQueue(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool instantAction);
		static void ClearQueue(bool instantAction);
		static Assembly_CSharp::Doozy::Engine::UI::UIPopup* GetPopup(mscorlib::System::String* popupName);
		static Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData* GetPopupData(mscorlib::System::String* popupName);
		static Assembly_CSharp::Doozy::Engine::UI::UIPopupQueueData* GetPopupData(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup);
		static bool IsInQueue(mscorlib::System::String* popupName);
		static bool IsInQueue(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup);
		static void RemoveFromQueue(mscorlib::System::String* popupName, bool showNextInQueue);
		static void RemoveFromQueue(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool showNextInQueue);
		static void ShowNextInQueue();
		static void ShowPopup(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool addToPopupQueue, bool instantAction, mscorlib::System::String* targetCanvasName);
		static void ShowPopup(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup, bool addToPopupQueue, bool instantAction);
		static Assembly_CSharp::Doozy::Engine::UI::UIPopup* ShowPopup(mscorlib::System::String* popupName, bool addToPopupQueue, bool instantAction, mscorlib::System::String* targetCanvasName);
		static Assembly_CSharp::Doozy::Engine::UI::UIPopup* ShowPopup(mscorlib::System::String* popupName, bool addToPopupQueue, bool instantAction);
		static Assembly_CSharp::Doozy::Engine::UI::UIPopupManager* AddToScene(bool selectGameObjectAfterCreation);
		static void _cctor();
	};
}

