#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_UI_Base_NamesDatabaseType.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::UI::Base
{
	struct ListOfNames : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* CategoryName;
		Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabaseType DatabaseType;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Names;
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		void AddName(mscorlib::System::String* value, bool performUndo, bool saveAssets);
		void AddNames(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* names, bool performUndo, bool saveAssets);
		void Clear(bool performUndo, bool saveAssets);
		bool Contains(mscorlib::System::String* value);
		void RemoveDuplicateNames();
		void RemoveEmptyNames();
		void RemoveName(mscorlib::System::String* value, bool performUndo, bool saveAssets);
		void Rename(mscorlib::System::String* newCategoryName, mscorlib::System::String* newAssetName, bool saveAssets);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

