const Sequelize = require('sequelize');
const connection = new Sequelize('bd_perguntas1230', 'root', '@Yan2004', {
    host: 'localhost',
    dialect: 'mysql'
})

module.exports = connection;