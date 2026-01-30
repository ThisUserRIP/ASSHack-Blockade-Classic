#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_UI_ControlMapper_ControlMapper_MappingSet_ActionListMode.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_MappingSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _mapCategoryId;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode _actionListMode;
		IL2CPP::Array<int32_t>* _actionCategoryIds;
		IL2CPP::Array<int32_t>* _actionIds;
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* _actionCategoryIdsReadOnly;
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* _actionIdsReadOnly;
		int32_t get_mapCategoryId();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode get_actionListMode();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* get_actionCategoryIds();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* get_actionIds();
		bool get_isValid();
		void _ctor();
		void _ctor(int32_t mapCategoryId, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet_ActionListMode actionListMode, IL2CPP::Array<int32_t>* actionCategoryIds, IL2CPP::Array<int32_t>* actionIds);
		static Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_MappingSet* get_Default();
	};
}

