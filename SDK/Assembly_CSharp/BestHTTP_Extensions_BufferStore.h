#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "BestHTTP_Extensions_BufferDesc.h"
namespace Assembly_CSharp::BestHTTP::Extensions { struct BufferDesc; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::Extensions
{
	struct BufferStore
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t Size;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::Extensions::BufferDesc>* buffers;
		void _ctor(int64_t size);
		void _ctor(int64_t size, IL2CPP::Array<uint8_t>* buffer);
	};
}

