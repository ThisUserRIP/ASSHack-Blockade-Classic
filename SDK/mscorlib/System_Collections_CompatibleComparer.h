#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System::Collections { struct IHashCodeProvider; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Collections
{
	struct CompatibleComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IComparer* _comparer;
		mscorlib::System::Collections::IHashCodeProvider* _hcp;
		void _ctor(mscorlib::System::Collections::IComparer* comparer, mscorlib::System::Collections::IHashCodeProvider* hashCodeProvider);
		int32_t Compare(mscorlib::System::Object* a, mscorlib::System::Object* b);
		bool Equals(mscorlib::System::Object* a, mscorlib::System::Object* b);
		int32_t GetHashCode(mscorlib::System::Object* obj);
		mscorlib::System::Collections::IComparer* get_Comparer();
		mscorlib::System::Collections::IHashCodeProvider* get_HashCodeProvider();
	};
}

