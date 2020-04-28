// generated by ./ddl2cpp /home/mxw/Desktop/out/filesystem.sql /home/mxw/Desktop/out/table_gen/Filesystem table
#ifndef TABLE_FILESYSTEM_H
#define TABLE_FILESYSTEM_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace table
{
  namespace Filesystem_
  {
    struct Pk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "pk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T pk;
            T& operator()() { return pk; }
            const T& operator()() const { return pk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::bigint, sqlpp::tag::must_not_insert, sqlpp::tag::must_not_update, sqlpp::tag::can_be_null>;
    };
    struct ParFk
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "par_fk";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T parFk;
            T& operator()() { return parFk; }
            const T& operator()() const { return parFk; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct Dirpath
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "dirpath";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T dirpath;
            T& operator()() { return dirpath; }
            const T& operator()() const { return dirpath; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct RepId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rep_id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T repId;
            T& operator()() { return repId; }
            const T& operator()() const { return repId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::can_be_null>;
    };
    struct RepName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "rep_name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T repName;
            T& operator()() { return repName; }
            const T& operator()() const { return repName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
  } // namespace Filesystem_

  struct Filesystem: sqlpp::table_t<Filesystem,
               Filesystem_::Pk,
               Filesystem_::ParFk,
               Filesystem_::Dirpath,
               Filesystem_::RepId,
               Filesystem_::RepName>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "filesystem";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T filesystem;
        T& operator()() { return filesystem; }
        const T& operator()() const { return filesystem; }
      };
    };
  };
} // namespace table
#endif
