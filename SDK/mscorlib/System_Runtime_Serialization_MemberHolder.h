#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Serialization
{
	struct MemberHolder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* memberType;
		mscorlib::System::Runtime::Serialization::StreamingContext context;
		void _ctor(mscorlib::System::Type* type, mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
	};
}

