#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Decompression::Zlib
{
	struct StaticTree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int16_t>* treeCodes;
		IL2CPP::Array<int32_t>* extraBits;
		int32_t extraBase;
		int32_t elems;
		int32_t maxLength;
		struct StaticFields
		{
			IL2CPP::Array<int16_t>* lengthAndLiteralsTreeCodes;
			IL2CPP::Array<int16_t>* distTreeCodes;
			Assembly_CSharp::BestHTTP::Decompression::Zlib::StaticTree* Literals;
			Assembly_CSharp::BestHTTP::Decompression::Zlib::StaticTree* Distances;
			Assembly_CSharp::BestHTTP::Decompression::Zlib::StaticTree* BitLengths;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<int16_t>* treeCodes, IL2CPP::Array<int32_t>* extraBits, int32_t extraBase, int32_t elems, int32_t maxLength);
		static void _cctor();
	};
}

