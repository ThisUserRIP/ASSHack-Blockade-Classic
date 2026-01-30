#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Decompression::Crc
{
	struct CRC32 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t dwPolynomial;
		int64_t _TotalBytesRead;
		bool reverseBits;
		IL2CPP::Array<uint32_t>* crc32Table;
		uint32_t _register;
		struct StaticFields
		{
			int32_t BUFFER_SIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int64_t get_TotalBytesRead();
		int32_t get_Crc32Result();
		int32_t GetCrc32(mscorlib::System::IO::Stream* input);
		int32_t GetCrc32AndCopy(mscorlib::System::IO::Stream* input, mscorlib::System::IO::Stream* output);
		int32_t ComputeCrc32(int32_t W, uint8_t B);
		int32_t _InternalComputeCrc32(uint32_t W, uint8_t B);
		void SlurpBlock(IL2CPP::Array<uint8_t>* block, int32_t offset, int32_t count);
		void UpdateCRC(uint8_t b);
		void UpdateCRC(uint8_t b, int32_t n);
		static uint32_t ReverseBits(uint32_t data);
		static uint8_t ReverseBits(uint8_t data);
		void GenerateLookupTable();
		uint32_t gf2_matrix_times(IL2CPP::Array<uint32_t>* matrix, uint32_t vec);
		void gf2_matrix_square(IL2CPP::Array<uint32_t>* square, IL2CPP::Array<uint32_t>* mat);
		void Combine(int32_t crc, int32_t length);
		void _ctor();
		void _ctor(bool reverseBits);
		void _ctor(int32_t polynomial, bool reverseBits);
		void Reset();
	};
}

