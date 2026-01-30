#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_ActionCategoryMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct ActionCategoryMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct ActionCategoryMap_Entry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t categoryId;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* actionIds;
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Int32>* get_ActionIds();
		void _ctor();
		void _ctor(int32_t categoryId);
		void _ctor(Rewired_Core::Rewired::Data::Mapping::ActionCategoryMap_Entry* source);
		void AddAction(int32_t actionId);
		bool InsertAction(int32_t actionId, int32_t index);
		bool ReorderAction(int32_t actionId, bool offsetDown, bool offsetNow);
		void RemoveAction(int32_t actionId);
		int32_t IndexOfAction(int32_t id);
		bool ContainsAction(int32_t id);
		Rewired_Core::Rewired::Data::Mapping::ActionCategoryMap_Entry* Clone();
	};
}

