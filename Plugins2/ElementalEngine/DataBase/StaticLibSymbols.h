//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:27:58

#ifndef INCLUDE_SYMBOLS_DATABASE
#define INCLUDE_SYMBOLS_DATABASE
#endif	//#ifndef INCLUDE_SYMBOLS_DATABASE
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *DATABASE_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CDatabaseManagerRO;
//Component externs
extern "C" CRegisterComponent CDatabaseRO;
extern "C" CRegisterComponent CDatabaseEntryRO;
extern "C" CRegisterComponent CDatabaseItemRO;
extern "C" CRegisterComponent CDatabaseManagerRO;
extern "C" CRegisterComponent CDatabaseSchemaRO;
extern "C" CRegisterComponent CDefinedDatabaseRO;
extern "C" CRegisterComponent CSchemaItemRO;
//Message externs
extern "C" CRegisterMessage GetDatabaseBySchema_CDatabaseRM;
extern "C" CRegisterMessage GetDBFileName_CDatabaseRM;
extern "C" CRegisterMessage GetDBSchemaFileName_CDatabaseRM;
extern "C" CRegisterMessage GetAttribute_CDatabaseEntryRM;
extern "C" CRegisterMessage GetAttributeType_CDatabaseEntryRM;
extern "C" CRegisterMessage SetAttribute_CDatabaseEntryRM;
extern "C" CRegisterMessage GetSchema_CDatabaseEntryRM;
extern "C" CRegisterMessage AddDatabase_CDatabaseManagerRM;
extern "C" CRegisterMessage GetDatabase_CDatabaseManagerRM;
extern "C" CRegisterMessage GetTypedDatabase_CDatabaseManagerRM;
extern "C" CRegisterMessage SetDatabase_CDatabaseManagerRM;
extern "C" CRegisterMessage RemoveDatabase_CDatabaseManagerRM;
extern "C" CRegisterMessage FindDatabaseByFileName_CDatabaseManagerRM;
extern "C" CRegisterMessage CreateGlobalDatabase_CDatabaseManagerRM;
extern "C" CRegisterMessage LoadGlobalAttributes_CDatabaseManagerRM;
extern "C" CRegisterMessage GetGlobalAttribute_CDatabaseManagerRM;
extern "C" CRegisterMessage GetGlobalAttributeType_CDatabaseManagerRM;
extern "C" CRegisterMessage SetGlobalAttribute_CDatabaseManagerRM;
extern "C" CRegisterMessage MapToFileName_CDatabaseSchemaRM;
extern "C" CRegisterMessage GetSchema_CDatabaseSchemaRM;
extern "C" CRegisterMessage MapToFileName_CDefinedDatabaseRM;
extern "C" CRegisterMessage GetAttribute_CDefinedDatabaseRM;
extern "C" CRegisterMessage GetAttributeType_CDefinedDatabaseRM;
extern "C" CRegisterMessage GetDatabaseInfo_CDefinedDatabaseRM;
extern "C" CRegisterMessage SetAttribute_CDefinedDatabaseRM;
extern "C" CRegisterMessage GetIndex_CDefinedDatabaseRM;

#endif	//#ifdef _LIB
