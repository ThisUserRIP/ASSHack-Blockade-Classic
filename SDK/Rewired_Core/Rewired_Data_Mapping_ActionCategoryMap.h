#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct ActionCategoryMap_Entry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct ActionCategoryMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Mapping::ActionCategoryMap_Entry>* list;
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Int32>* ActionIdsInCategory(int32_t categoryId);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::Mapping::ActionCategoryMap* source);
		void AddCategory(int32_t id);
		void RemoveCategory(int32_t id);
		bool ReorderCategory(int32_t id, bool offsetDown);
		bool ChangeCategory(int32_t actionId, int32_t newCategoryId);
		int32_t IndexOfCategory(int32_t id);
		bool AddAction(int32_t categoryId, int32_t actionId);
		bool InsertAction(int32_t categoryId, int32_t actionId, int32_t index);
		bool ReorderAction(int32_t categoryId, int32_t actionId, bool offsetDown, bool offsetNow);
		void RemoveAction(int32_t categoryId, int32_t actionId);
		int32_t IndexOfAction(int32_t categoryId, int32_t actionId);
		Rewired_Core::Rewired::Data::Mapping::ActionCategoryMap* Clone();
	};
}

