#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Doozy_Engine_UI_Animation_AnimationType.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimationDatabase; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimationsDatabase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* DatabaseNames;
		Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType DatabaseType;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase>* Databases;
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
		bool AddUIAnimationDatabase(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase* database);
		bool Contains(mscorlib::System::String* databaseName);
		bool Contains(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase* database);
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase* Get(mscorlib::System::String* databaseName);
		void Update();
		void AddTheDefaultUIAnimationDatabase();
		void AddUnreferencedPresets();
		void RenameAssetFileNamesToReflectDatabaseNames();
		void RemoveEmptyDatabases();
		void Sort();
		void UpdateDatabaseNames();
		void UpdateDatabases();
	};
}

