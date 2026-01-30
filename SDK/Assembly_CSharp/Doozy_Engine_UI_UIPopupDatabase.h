#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupLink; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopupDatabase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* PopupNames;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::UIPopupLink>* Popups;
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		bool get_IsEmpty();
		bool Add(Assembly_CSharp::Doozy::Engine::UI::UIPopupLink* popupLink, bool performUndo, bool saveAssets);
		bool Contains(mscorlib::System::String* popupName);
		bool Contains(Assembly_CSharp::Doozy::Engine::UI::UIPopup* prefab);
		bool CreateUIPopupLink(mscorlib::System::String* popupName, UnityEngine_CoreModule::UnityEngine::GameObject* prefab, bool performUndo, bool saveAssets);
		bool DeletePopupLink(Assembly_CSharp::Doozy::Engine::UI::UIPopupLink* reference);
		UnityEngine_CoreModule::UnityEngine::GameObject* GetPrefab(mscorlib::System::String* popupName);
		mscorlib::System::String* GetPopupName(Assembly_CSharp::Doozy::Engine::UI::UIPopup* prefab);
		int32_t IndexOf(mscorlib::System::String* popupName);
		int32_t IndexOf(Assembly_CSharp::Doozy::Engine::UI::UIPopup* prefab);
		void RefreshDatabase(bool performUndo, bool saveAssets);
		void RemoveLink(mscorlib::System::String* popupName, bool showDialog, bool saveAssets);
		void RemoveUnreferencedData(bool saveAssets);
		bool ResetDatabase();
		void SearchForUnregisteredLinks(bool saveAssets);
		void SetDirty(bool saveAssets);
		void Sort(bool performUndo, bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void UpdateListOfPopupNames();
		void _ctor();
	};
}

