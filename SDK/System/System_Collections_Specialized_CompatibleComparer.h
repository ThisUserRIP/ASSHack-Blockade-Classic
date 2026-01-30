#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System::Collections { struct IHashCodeProvider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::Collections::Specialized
{
	struct CompatibleComparer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IComparer* _comparer;
		mscorlib::System::Collections::IHashCodeProvider* _hcp;
		struct StaticFields
		{
			mscorlib::System::Collections::IComparer* defaultComparer;
			mscorlib::System::Collections::IHashCodeProvider* defaultHashProvider;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Collections::IComparer* comparer, mscorlib::System::Collections::IHashCodeProvider* hashCodeProvider);
		bool Equals(mscorlib::System::Object* a, mscorlib::System::Object* b);
		int32_t GetHashCode(mscorlib::System::Object* obj);
		mscorlib::System::Collections::IComparer* get_Comparer();
		mscorlib::System::Collections::IHashCodeProvider* get_HashCodeProvider();
		static mscorlib::System::Collections::IComparer* get_DefaultComparer();
		static mscorlib::System::Collections::IHashCodeProvider* get_DefaultHashCodeProvider();
	};
}

