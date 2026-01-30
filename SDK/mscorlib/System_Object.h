#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct Object : IL2CPP::Il2CppObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Equals(mscorlib::System::Object* obj);
		static bool Equals(mscorlib::System::Object* objA, mscorlib::System::Object* objB);
		void _ctor();
		void Finalize();
		int32_t GetHashCode();
		mscorlib::System::Type* GetType();
		mscorlib::System::Object* MemberwiseClone();
		mscorlib::System::String* ToString();
		static bool ReferenceEquals(mscorlib::System::Object* objA, mscorlib::System::Object* objB);
		static int32_t InternalGetHashCode(mscorlib::System::Object* o);
		void FieldGetter(mscorlib::System::String* typeName, mscorlib::System::String* fieldName, mscorlib::System::Object& val);
		void FieldSetter(mscorlib::System::String* typeName, mscorlib::System::String* fieldName, mscorlib::System::Object* val);
	};
}

