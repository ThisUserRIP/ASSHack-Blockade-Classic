#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_InputCategory.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired
{
	struct InputMapCategory : Rewired_Core::Rewired::InputCategory
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _checkConflictsWithAllCategories;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* _checkConflictsCategoryIds;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Int32>* _checkConflictsCategoryIds_readOnly;
		bool get_checkConflictsWithAllCategories();
		void set_checkConflictsWithAllCategories(bool value);
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Int32>* get_checkConflictsCategoryIds();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* get_checkConflictsCategoryIds_orig();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::InputMapCategory* source);
		void pKLNoWCgVUqlRfCsOXaDmHUNbICB();
	};
}

