#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_ConfigVars.h"
namespace Rewired_Core::Rewired::Data { struct ConfigVars; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	struct ConfigVars_EditorVars : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool exportConsts_useParentClass;
		mscorlib::System::String* exportConsts_parentClassName;
		bool exportConsts_useNamespace;
		mscorlib::System::String* exportConsts_namespace;
		bool exportConsts_actions;
		mscorlib::System::String* exportConsts_actionsClassName;
		bool exportConsts_actionsIncludeActionCategory;
		bool exportConsts_actionsCreateClassesForActionCategories;
		bool exportConsts_mapCategories;
		mscorlib::System::String* exportConsts_mapCategoriesClassName;
		bool exportConsts_layouts;
		mscorlib::System::String* exportConsts_layoutsClassName;
		bool exportConsts_players;
		mscorlib::System::String* exportConsts_playersClassName;
		bool exportConsts_inputBehaviors;
		mscorlib::System::String* exportConsts_inputBehaviorsClassName;
		bool exportConsts_customControllers;
		mscorlib::System::String* exportConsts_customControllersClassName;
		mscorlib::System::String* exportConsts_customControllersAxesClassName;
		mscorlib::System::String* exportConsts_customControllersButtonsClassName;
		bool exportConsts_layoutManagerRuleSets;
		mscorlib::System::String* exportConsts_layoutManagerRuleSetsClassName;
		bool exportConsts_mapEnablerRuleSets;
		mscorlib::System::String* exportConsts_mapEnablerRuleSetsClassName;
		bool exportConsts_allCapsConstantNames;
		void _ctor();
	};
}

