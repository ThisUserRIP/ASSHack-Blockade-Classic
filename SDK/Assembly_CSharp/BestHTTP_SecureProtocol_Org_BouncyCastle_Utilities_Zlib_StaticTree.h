#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	struct StaticTree : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int16_t>* static_tree;
		IL2CPP::Array<int32_t>* extra_bits;
		int32_t extra_base;
		int32_t elems;
		int32_t max_length;
		struct StaticFields
		{
			int32_t MAX_BITS;
			int32_t BL_CODES;
			int32_t D_CODES;
			int32_t LITERALS;
			int32_t LENGTH_CODES;
			int32_t L_CODES;
			int32_t MAX_BL_BITS;
			IL2CPP::Array<int16_t>* static_ltree;
			IL2CPP::Array<int16_t>* static_dtree;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_l_desc;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_d_desc;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::StaticTree* static_bl_desc;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<int16_t>* static_tree, IL2CPP::Array<int32_t>* extra_bits, int32_t extra_base, int32_t elems, int32_t max_length);
		static void _cctor();
	};
}

