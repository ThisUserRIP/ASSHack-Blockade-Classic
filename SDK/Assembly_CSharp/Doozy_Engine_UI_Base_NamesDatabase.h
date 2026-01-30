#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_UI_Base_NamesDatabaseType.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct ListOfNames; };
namespace Assembly_CSharp::Doozy::Engine::Utils { struct UILanguagePack; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_Utils_DoozyPath_ComponentName.h"

namespace Assembly_CSharp::Doozy::Engine::UI::Base
{
	struct NamesDatabase : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabaseType DatabaseType;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* CategoryNames;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Base::ListOfNames>* Categories;
		struct StaticFields
		{
			mscorlib::System::String* BACK;
			mscorlib::System::String* CUSTOM;
			mscorlib::System::String* DOWN;
			mscorlib::System::String* GENERAL;
			mscorlib::System::String* LEFT;
			mscorlib::System::String* MASTER_CANVAS;
			mscorlib::System::String* RIGHT;
			mscorlib::System::String* UNNAMED;
			mscorlib::System::String* UP;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Doozy::Engine::Utils::UILanguagePack* get_UILabels();
		bool get_IsEmpty();
		bool Add(Assembly_CSharp::Doozy::Engine::UI::Base::ListOfNames* category, bool performUndo, bool saveAssets);
		void AddDefaultCategories(bool saveAssets);
		bool Contains(mscorlib::System::String* categoryName);
		bool CreateCategory(mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* names, bool showDialog, bool saveAssets);
		bool DeleteCategory(Assembly_CSharp::Doozy::Engine::UI::Base::ListOfNames* category);
		Assembly_CSharp::Doozy::Engine::UI::Base::ListOfNames* GetCategory(mscorlib::System::String* categoryName);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* GetNamesList(mscorlib::System::String* categoryName, bool getDirectReference);
		void RefreshDatabase(bool performUndo, bool saveAssets);
		void RemoveCategory(mscorlib::System::String* categoryName, bool showDialog, bool saveAssets);
		bool Rename(mscorlib::System::String* oldCategoryName, mscorlib::System::String* newCategoryName, bool performUndo, bool saveAssets);
		void RemoveDuplicateNamesFromCategories(bool performUndo, bool saveAssets);
		void RemoveNullDatabases(bool saveAssets);
		void RemoveEmptyNames(bool performUndo, bool saveAssets);
		void RemoveUnreferencedData(bool saveAssets);
		bool ResetDatabase();
		void SearchForUnregisteredDatabases(bool saveAssets);
		void SetDirty(bool saveAssets);
		void Sort(bool performUndo, bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void UpdateListOfCategoryNames();
		static bool CanDeleteItem(Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* database, mscorlib::System::String* itemName);
		static Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* GetDatabase(mscorlib::System::String* fileName, mscorlib::System::String* resourcesPath);
		static mscorlib::System::String* GetPath(Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabaseType databaseType);
		static Assembly_CSharp::Doozy::Engine::Utils::DoozyPath_ComponentName GetComponentName(Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabaseType databaseType);
		static mscorlib::System::String* GetDatabaseFileName(Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabaseType databaseType, mscorlib::System::String* categoryName);
		void _ctor();
	};
}

