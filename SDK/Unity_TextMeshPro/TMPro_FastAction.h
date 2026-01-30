#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Action; };
namespace System::System::Collections::Generic { template <typename T> struct LinkedList_1; };
namespace System::System::Collections::Generic { template <typename T> struct LinkedListNode_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct FastAction : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Collections::Generic::LinkedList_1<mscorlib::System::Action>* delegates;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Action, System::System::Collections::Generic::LinkedListNode_1<mscorlib::System::Action>>* lookup;
		void Add(mscorlib::System::Action* rhs);
		void Remove(mscorlib::System::Action* rhs);
		void Call();
		void _ctor();
	};
}

